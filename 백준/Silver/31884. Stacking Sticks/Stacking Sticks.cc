#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int q;
  cin >> q;
  map<int, int> m;
  while (q--) {
    int a, b;
    cin >> a >> b;
    if (a == 1) {
      int mx = 0;
      for (int i = b; i < b + 4; i++) {
        mx = max(mx, m[i]);
      }
      for (int i = b; i < b + 4; i++) {
        m[i] = mx + 1;
      }
    }
    if (a == 2) {
      m[b] += 4;
    }
    if (a == 3) {
      cout << m[b] << "\n";
    }
  }
  return 0;
}