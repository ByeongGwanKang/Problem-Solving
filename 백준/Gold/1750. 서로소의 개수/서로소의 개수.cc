#include <bits/stdc++.h>
using namespace std;

const int MOD = 10000003;
int dp[51][100001];
int gcd(int a, int b) {
  if (a % b == 0) {
    return b;
  }
  return gcd(b, a % b);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    dp[i][v[i]] = 1;
    if (i == 0) {
      continue;
    }
    for (int j = 0; j <= v[i]; j++) {
      int tmp = gcd(j, v[i]);
      dp[i][j] += dp[i - 1][j];
      dp[i][tmp] = (dp[i][tmp] + dp[i - 1][j]) % MOD;
    }
  }
  cout << dp[n - 1][1];
  return 0;
}