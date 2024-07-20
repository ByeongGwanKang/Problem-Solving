#include <bits/stdc++.h>
using namespace std;

int arr[1005][1005];
pair<int, int> dp[1005][1005];
int P_arr[1005][1005];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> arr[i][j];
    }
  }
  int p;
  cin >> p;
  for (int i = 0; i < p; i++) {
    int x, y;
    cin >> x >> y;
    P_arr[x][y] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      dp[i][j].first += arr[i][j];
      dp[i][j].second += P_arr[i][j];
    }
  }
  cout << dp[n][n].first << " " << dp[n][n].second;
  return 0;
}