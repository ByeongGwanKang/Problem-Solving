#include <bits/stdc++.h>
using namespace std;

set<int> s;
vector<int> v;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    s.clear();
    v.clear();
    v.reserve(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      s.insert(v[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int tmp = v[i] + v[j];
        if (tmp % 2 != 0) {
          continue;
        }
        if (s.find(tmp / 2) != s.end()) {
          cnt++;
        }
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}