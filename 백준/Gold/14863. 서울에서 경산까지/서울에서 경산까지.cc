#include <bits/stdc++.h>
using namespace std;

int dp[101][100001]; // i번째 구간까지 j시간 썼을때 최대값
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> walk(n + 1);
  vector<pair<int, int>> cycle(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> walk[i].first >> walk[i].second;
    cin >> cycle[i].first >> cycle[i].second;
  }
  dp[1][walk[1].first] = walk[1].second;
  dp[1][cycle[1].first] = max(dp[1][cycle[1].first], cycle[1].second);
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      if (dp[i - 1][j] != 0) {
        //걷기가 가능하다면 스킵/추가 중 큰것
        if (walk[i].first + j <= k) {
          dp[i][j + walk[i].first] =
              max(dp[i][j + walk[i].first], dp[i - 1][j] + walk[i].second);
        }
        //자전거 가능하다면 스킵/추가 중 큰것
        if (cycle[i].first + j <= k) {
          dp[i][j + cycle[i].first] =
              max(dp[i][j + cycle[i].first], dp[i - 1][j] + cycle[i].second);
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= k; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans;
  return 0;
}