#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    list<char> ans;
    auto iter = ans.begin();
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '-') {
        if (iter != ans.begin()) {
          iter--;
          iter=ans.erase(iter);
        }
      } else if (s[i] == '<') {
        if (iter != ans.begin())
          iter--;
      } else if (s[i] == '>') {
        if (iter != ans.end())
          iter++;
      } else {
        ans.insert(iter, s[i]);
      }
    }
    for (auto a : ans) {
      cout << a;
    }
    cout << "\n";
  }
  return 0;
}