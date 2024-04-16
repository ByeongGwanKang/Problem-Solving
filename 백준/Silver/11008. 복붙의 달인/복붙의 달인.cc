#include <bits/stdc++.h>
using namespace std;


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    string c;
    cin >> c;
    int ans = s.length();
    for (int i = 0; i < s.length() - c.length() + 1; i++) {
      if (c == s.substr(i, c.length())) {
        ans -= c.length() - 1;
        i += c.length() - 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
