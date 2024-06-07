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
    cin.ignore();
    string s;
    getline(cin, s);
    istringstream ss(s);
    string tmp;
    vector<string> v;
    while (getline(ss, tmp, ' ')) {
      v.push_back(tmp);
    }
    // cin.ignore();
    int ans = 1;
    int len = 0;
    for (int i = 0; i < v.size(); i++) {
      len += v[i].length();
      if (len > n) {
        len = v[i].length();
        ans++;
      }
      len++;
    }
    cout << ans << "\n";
  }
  return 0;
}