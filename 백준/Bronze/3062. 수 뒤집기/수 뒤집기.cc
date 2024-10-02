#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    int rvs = stoi(s);
    int res = rvs + n;
    string tmp = to_string(res);
    int len = tmp.length();
    bool flag = true;
    for (int i = 0; i < len; i++) {
      if (tmp[i] != tmp[len - i - 1]) {
        cout << "NO\n";
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "YES\n";
    }
  }
  return 0;
}