#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin >> s;
  int n;
  cin >> n;
  int len = s.length();
  vector<vector<int>> v(len + 5, vector<int>(26, 0));
  for (int i = 1; i <= len; i++) {
    for (int j = 0; j < 26; j++) {
      v[i][j] = v[i - 1][j];
    }
    v[i][s[i - 1] - 'a'] = v[i - 1][s[i - 1] - 'a'] + 1;
  }
  while (n--) {
    char c;
    int l, r;
    cin >> c >> l >> r;
    cout << v[r + 1][c - 'a'] - v[l][c - 'a'] << "\n";
  }
  return 0;
}