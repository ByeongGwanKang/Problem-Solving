#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000005;
int dp[1001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  string s;
  cin >> s;
  fill(dp, dp + 1001, MAX);
  dp[0] = 0;
  for (int i = 0; i < n; i++) {
    char now = s[i];
    if (dp[i] == MAX) {
      continue;
    }
    for (int j = i + 1; j < n; j++) {
      if (now == 'B' && s[j] == 'O') {
        dp[j] = min(dp[j], dp[i] + (int)pow(j - i, 2));
      }
      if (now == 'O' && s[j] == 'J') {
        dp[j] = min(dp[j], dp[i] + (int)pow(j - i, 2));
      }
      if (now == 'J' && s[j] == 'B') {
        dp[j] = min(dp[j], dp[i] + (int)pow(j - i, 2));
      }
    }
  }
  if (dp[n - 1] == MAX) {
    cout << -1;
  } else {
    cout << dp[n - 1];
  }
  return 0;
}