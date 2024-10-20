#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll MOD = 998244353;
ll dp[50300][8];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    dp[i][0] = 6 * dp[i - 1][0] % MOD;
    for (int j = 1; j <= 6; j++) {
      dp[i][j] = (dp[i - 1][j - 1] + 6 * dp[i - 1][j]) % MOD;
    }
    dp[i][7] = (dp[i - 1][6] + 7 * dp[i - 1][7]) % MOD;
  }
  cout << dp[n][7];
  return 0;
}