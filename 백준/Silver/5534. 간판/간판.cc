#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  string name;
  cin >> name;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.length() < name.length()) {
      continue;
    }
    bool flag = false;
    for (int j = 0; j <= s.length() - name.length(); j++) {
      if (flag == true) {
        break;
      }
      if (s[j] == name[0]) {
        for (int k = j + 1; k < s.length(); k++) {
          if (s[k] == name[1]) {
            int gap = k - j;
            int name_idx = 2;
            int nxt = k + gap;
            while (true) {
              if (name_idx == name.length()) {
                break;
              }
              if (nxt >= s.length()) {
                break;
              }
              if (s[nxt] != name[name_idx]) {
                break;
              }
              nxt += gap;
              name_idx++;
            }
            if (name_idx == name.length()) {
              ans++;
              flag = true;
              break;
            }
          }
        }
      }
    }
  }
  cout << ans;
  return 0;
}