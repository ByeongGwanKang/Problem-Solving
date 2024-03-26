#include <bits/stdc++.h>
using namespace std;

bool arr[51][1001];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, s, m;
  cin >> n >> s >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  arr[0][s] = true;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= 1000; j++) {
      if (arr[i - 1][j] == true) {
        if (j + v[i - 1] <= m) {
          arr[i][j + v[i - 1]] = true;
        }
        if (j - v[i - 1] >= 0) {
          arr[i][j - v[i - 1]] = true;
        }
      }
    }
  }
  for (int i = 1000; i >= 0; i--) {
    if (arr[n][i] == true) {
      cout << i;
      return 0;
    }
  }
  cout << -1;
  return 0;
}
