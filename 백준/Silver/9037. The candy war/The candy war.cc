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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] % 2 != 0) {
        v[i]++;
      }
    }
    int cnt = 0;
    while (true) {
      bool same = true;
      for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
          same = false;
        }
      }
      if (same) {
        cout << cnt << "\n";
        break;
      }
      if (!same) {
        vector<int> tmp = v;
        cnt++;
        for (int i = 0; i < n; i++) {
          if (i == n - 1) {
            tmp[i] -= v[i] / 2;
            tmp[0] += v[i] / 2;
          } else {
            tmp[i] -= v[i] / 2;
            tmp[i + 1] += v[i] /= 2;
          }
        }
        v = tmp;

        for (int i = 0; i < n; i++) {
          if (v[i] % 2 != 0) {
            v[i]++;
          }
        }
      }
    }
  }
  return 0;
}