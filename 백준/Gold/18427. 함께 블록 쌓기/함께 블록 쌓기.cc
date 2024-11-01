#include <bits/stdc++.h>
using namespace std;

int dp[51][1001];
const int MOD = 10007;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, h;
  cin >> n >> m >> h;
  cin.ignore();
  vector<vector<int>> v(n + 1);
  for (int i = 1; i <= n; i++) {
    string s;
    int val;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> val) {
      v[i].push_back(val);
    }
  }
  for (int i = 0; i <= n; i++) {
    dp[i][0] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= h; j++) {
      for (int k = 0; k < v[i].size(); k++) {
        //선택
        if (j >= v[i][k]) {
          dp[i][j] = (dp[i][j] + dp[i - 1][j - v[i][k]]) % MOD;
        }
      }
      //선택안함
      dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
    }
  }
  cout << dp[n][h];
  return 0;
}