#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj(101); //각 번호마다 계급,시간
vector<int> prior[102];          //각 계급마다 번호
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> dp(n + 1);
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int r, t;
    cin >> r >> t;
    adj[i] = {r, t};
    prior[r].push_back(i);
  }
  for (int i = 1; i <= n; i++) {
    if (prior[i + 1].empty()) {
      for (auto a : prior[i]) {
        int now = dp[a] + adj[a].second;
        ans = max(now, ans);
      }
    }
    for (auto a : prior[i]) {
      for (auto b : prior[i + 1]) {
        dp[b] = max(dp[b], dp[a] + adj[a].second + (a - b) * (a - b));
        ans = max(ans, dp[b]);
      }
    }
  }
  cout << ans;
  return 0;
}