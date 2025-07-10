#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (true) {
    string s;
    bool check = true;
    int aeiou = 0;
    int mo_cnt = 0;
    int ja_cnt = 0;
    cin >> s;
    if (s == "end") {
      return 0;
    }
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u') {
        aeiou++;
        mo_cnt++;
        ja_cnt = 0;
      } else {
        ja_cnt++;
        mo_cnt = 0;
      }
      if (i != 0) {
        if (s[i] == s[i - 1] && s[i] != 'e' && s[i] != 'o') {
          check = false;
          break;
        }
      }
      if (ja_cnt >= 3 || mo_cnt >= 3) {
        check = false;
        break;
      }
    }
    if (aeiou == 0) {
      check = false;
    }
    if (check) {
      cout << "<" << s << "> is acceptable.\n";
    } else {
      cout << "<" << s << "> is not acceptable.\n";
    }
  }
  return 0;
}