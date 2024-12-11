#include <bits/stdc++.h>
using namespace std;

bool chk[5];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin >> s;
  for (auto a : s) {
    if (a == 'M') {
      chk[0] = true;
    }
    if (a == 'O') {
      chk[1] = true;
    }
    if (a == 'B') {
      chk[2] = true;
    }
    if (a == 'I') {
      chk[3] = true;
    }
    if (a == 'S') {
      chk[4] = true;
    }
  }
  for (int i = 0; i < 5; i++) {
    if (chk[i] == false) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}