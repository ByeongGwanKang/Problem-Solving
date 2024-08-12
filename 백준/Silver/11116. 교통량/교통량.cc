//11116
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  while (n--) {
    int m;
    cin >> m;
    vector<int> left(m);
    vector<int> right(m);
    for (int i = 0; i < m; i++) {
      cin >> left[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> right[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
      for (int j = i + 1; j < m; j++) {
        if (left[i] + 500 == left[j]) {
          for (int k = 0; k < m; k++) {
            if (left[j] + 500 == right[k]) {
              ans++;
              break;
            }
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}