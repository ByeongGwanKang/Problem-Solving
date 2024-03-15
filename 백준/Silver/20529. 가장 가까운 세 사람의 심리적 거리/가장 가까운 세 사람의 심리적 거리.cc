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
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    if (n > 32) {
      cout << 0 << "\n";
      continue;
    }
    int ans = 100;
    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
          int temp = 0;
          for (int l = 0; l < 4; l++) {
            if (v[i][l] != v[j][l]) {
              temp++;
            }
            if (v[j][l] != v[k][l]) {
              temp++;
            }
            if (v[i][l] != v[k][l]) {
              temp++;
            }
          }
          ans = min(ans, temp);
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
