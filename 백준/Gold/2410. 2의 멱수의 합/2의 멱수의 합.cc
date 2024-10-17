#include <bits/stdc++.h>
using namespace std;

const int MOD = 1'000'000'000;
int dp[1'000'001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  dp[0] = 1;
  for (int i = 1; i <= n; i *= 2) {
    for (int j = i; j <= n; j++) {
      dp[j] = (dp[j] + dp[j - i]) % MOD;
    }
  }
  cout << dp[n];
  return 0;
}