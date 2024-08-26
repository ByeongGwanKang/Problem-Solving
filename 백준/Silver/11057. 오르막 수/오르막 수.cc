#include <bits/stdc++.h>
using namespace std;

int dp[1001][10];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < 10; i++) {
    dp[0][i] = 1;
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k <= j; k++) {
        dp[i][j] += dp[i - 1][k];
        dp[i][j] %= 10007;
      }
    }
  }
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += dp[n - 1][i];
  }
  sum %= 10007;
  cout << sum;
  return 0;
}