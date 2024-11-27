#include <bits/stdc++.h>
using namespace std;

set<string> s;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string now;
    cin >> now;
    if (s.find(now) == s.end()) {
      ans++;
      for (int j = 0; j < now.length(); j++) {
        string tmp = "";
        for (int k = j; k < now.length(); k++) {
          tmp += now[k];
        }
        for (int k = 0; k < j; k++) {
          tmp += now[k];
        }
        s.insert(tmp);
      }
    }
  }
  cout << ans;
  return 0;
}