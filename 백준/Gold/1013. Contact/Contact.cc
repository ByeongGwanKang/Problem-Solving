#include <bits/stdc++.h>
using namespace std;

void match(string s) {
  regex rg("(10(0+)(1+)|01)+");
  if (regex_match(s, rg)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    match(s);
  }
  return 0;
}