#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin >> s;
  string ans = "";
  int cnt = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'X') {
      cnt++;
      if (cnt == 4) {
        cnt = 0;
        ans += "AAAA";
      }
    } else {
      if (cnt % 2 != 0) {
        cout << -1;
        return 0;
      }
      while (cnt != 0 && cnt % 2 == 0) {
        ans += "BB";
        cnt -= 2;
      }
      ans += ".";
    }
  }
  if (cnt == 2) {
    ans += "BB";
    cnt -= 2;
  }
  if (cnt == 0) {
    cout << ans;
  } else {
    cout << -1;
  }
  return 0;
}
