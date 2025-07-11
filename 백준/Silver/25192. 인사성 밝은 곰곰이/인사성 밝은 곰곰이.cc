#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  set<string> s;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    if (name == "ENTER") {
      s.clear();
      continue;
    }
    if (s.find(name) == s.end()) {
      s.insert(name);
      ans++;
    }
  }
  cout << ans;
  return 0;
}