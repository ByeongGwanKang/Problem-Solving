#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
      res ^= v[i];
    }
    if (res == 0) {
      cout << "0\n";
      continue;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      int now = res ^ v[i];
      if (now <= v[i]) {
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}