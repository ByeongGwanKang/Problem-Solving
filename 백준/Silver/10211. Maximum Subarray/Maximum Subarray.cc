#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    vector<int> v(n + 1);
    int ans = -1000;
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
      dp[i] = max(dp[i - 1] + v[i], v[i]);
      ans = max(dp[i], ans);
    }
    cout << ans << "\n";
  }
  return 0;
}