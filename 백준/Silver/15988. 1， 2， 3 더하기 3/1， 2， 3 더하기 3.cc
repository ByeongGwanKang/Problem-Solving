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
    vector<long long> dp(n + 5);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= n; i++) {
      dp[i] = dp[i - 1] % 1000000009 + dp[i - 2] % 1000000009 +
              dp[i - 3] % 1000000009;
      dp[i] %= 1000000009;
    }
    cout << dp[n] << "\n";
  }
  return 0;
}