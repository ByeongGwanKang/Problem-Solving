#include <bits/stdc++.h>
using namespace std;

int J[1001][1001];
int O[1001][1001];
int I[1001][1001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  int k;
  cin >> k;
  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    for (int j = 1; j <= m; j++) {
      J[i][j] = J[i - 1][j] + J[i][j - 1] - J[i - 1][j - 1];
      O[i][j] = O[i - 1][j] + O[i][j - 1] - O[i - 1][j - 1];
      I[i][j] = I[i - 1][j] + I[i][j - 1] - I[i - 1][j - 1];
      if (s[j - 1] == 'J') {
        J[i][j]++;
      }
      if (s[j - 1] == 'O') {
        O[i][j]++;
      }
      if (s[j - 1] == 'I') {
        I[i][j]++;
      }
    }
  }
  for (int i = 0; i < k; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << J[c][d] - J[c][b - 1] - J[a - 1][d] + J[a - 1][b - 1] << " ";
    cout << O[c][d] - O[c][b - 1] - O[a - 1][d] + O[a - 1][b - 1] << " ";
    cout << I[c][d] - I[c][b - 1] - I[a - 1][d] + I[a - 1][b - 1] << "\n";
  }
  return 0;
}