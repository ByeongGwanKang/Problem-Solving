#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  string check;
  int ans = 0;
  getline(cin, s);
  getline(cin, check);
  for (int i = 0; i < (int)s.length() - (int)check.length() + 1; i++) {
    string temp = s.substr(i, check.length());
    if (temp == check) {
      i += check.length() - 1;
      ans++;
    }
  }
  cout << ans;
  return 0;
}
