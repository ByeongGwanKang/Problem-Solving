#include <bits/stdc++.h>
using namespace std;

int adp[100][21];
int ddp[100][21];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s, devil, angel;
  cin >> s >> devil >> angel;
  for (int i = 0; i < devil.length(); i++) {
    if (devil[i] == s[0]) {
      ddp[i][0]++;
    }
    if (angel[i] == s[0]) {
      adp[i][0]++;
    }
  }
  for (int i = 1; i < devil.length(); i++) {
    for (int j = 1; j < s.length(); j++) {
      if (devil[i] == s[j]) {
        int tmp = 0;
        for (int k = 0; k < i; k++) {
          tmp += adp[k][j - 1];
        }
        ddp[i][j] = tmp;
      }
      if (angel[i] == s[j]) {
        int tmp = 0;
        for (int k = 0; k < i; k++) {
          tmp += ddp[k][j - 1];
        }
        adp[i][j] = tmp;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < devil.length(); i++) {
    ans += ddp[i][s.length() - 1];
    ans += adp[i][s.length() - 1];
  }
  cout << ans;
  return 0;
}