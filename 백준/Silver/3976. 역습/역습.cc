#include <bits/stdc++.h>
using namespace std;

int dp[100001][2]; // i번째 점에서 최솟값
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int c;
  cin >> c;
  while (c--) {
    memset(dp, -1, sizeof(dp));
    int n, l1, l2, s1, s2;
    cin >> n >> l1 >> l2 >> s1 >> s2;
    vector<int> p1(n);
    vector<int> d1(n);
    vector<int> p2(n);
    vector<int> d2(n);
    for (int i = 0; i < n - 1; i++) {
      cin >> p1[i];
    }
    for (int i = 0; i < n - 1; i++) {
      cin >> d1[i];
    }
    for (int i = 0; i < n - 1; i++) {
      cin >> p2[i];
    }
    for (int i = 0; i < n - 1; i++) {
      cin >> d2[i];
    }
    dp[0][0] = l1;
    dp[0][1] = l2;
    for (int i = 1; i < n; i++) {
      dp[i][0] = min(dp[i - 1][1] + p2[i - 1], dp[i - 1][0] + d1[i - 1]);
      dp[i][1] = min(dp[i - 1][0] + p1[i - 1], dp[i - 1][1] + d2[i - 1]);
    }
    dp[n - 1][0] += s1;
    dp[n - 1][1] += s2;
    cout << min(dp[n - 1][0], dp[n - 1][1]) << "\n";
  }
  return 0;
}