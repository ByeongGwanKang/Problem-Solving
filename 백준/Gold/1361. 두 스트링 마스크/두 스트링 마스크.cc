#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s1, s2;
  cin >> s1 >> s2;
  string prefix1, suffix1, prefix2, suffix2;
  size_t star1 = s1.find('*');
  size_t star2 = s2.find('*');
  prefix1 = s1.substr(0, star1);
  prefix2 = s2.substr(0, star2);
  suffix1 = s1.substr(star1 + 1);
  suffix2 = s2.substr(star2 + 1);
  string ns1 = prefix1 + suffix1;
  string ns2 = prefix2 + suffix2;
  vector<string> ans;
  for (int i = 0; i <= ns2.length(); i++) {
    for (int j = 0; j <= ns2.length() - i; j++) {
      string tmp1 = prefix1 + ns2.substr(j, i) + suffix1;
      for (int k = 0; k <= ns1.length(); k++) {
        for (int l = 0; l <= ns1.length() - k; l++) {
          string tmp2 = prefix2 + ns1.substr(l, k) + suffix2;
          if (tmp1 == tmp2) {
            ans.push_back(tmp1);
          }
        }
      }
    }
  }
  int mnlen = 1e9;
  string res;
  for (auto a : ans) {
    if (a.length() < mnlen) {
      mnlen = min(mnlen, (int)a.length());
      res = a;
    }
  }
  if (ans.empty()) {
    cout << -1;
  } else {
    cout << res;
  }
  return 0;
}