#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  set<string> s;
  s.insert("ChongChong");
  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    if (s.find(a) == s.end() && s.find(b) == s.end()) {
      continue;
    }
    s.insert(a);
    s.insert(b);
  }
  cout << s.size();
  return 0;
}