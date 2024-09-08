//9455
#include <bits/stdc++.h>
using namespace std;

int MAP[101][101];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> MAP[i][j];
      }
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (MAP[i][j] == 1) {
          for (int k = i + 1; k < m; k++) {
            if (MAP[k][j] == 0) {
              ans++;
            }
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}