#include <bits/stdc++.h>
using namespace std;

vector<int> check(26, 0);
int cntAlp() { return count(check.begin(), check.end(), 0); }
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int lo = 0, hi = 0;
  int mxlen = 0;
  while (hi < s.length()) {
    check[s[hi] - 'a']++;
    while (26 - cntAlp() > n) {
      check[s[lo] - 'a']--;
      lo++;
    }
    mxlen = max(mxlen, hi - lo + 1);
    hi++;
  }
  cout << mxlen;
  return 0;
}