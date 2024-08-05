#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> v(n, -1);
  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    v[tmp] = 0;
  }
  for (int i = 0; i < k; i++) {
    vector<bool> check(n, false);
    for (int j = 0; j < n; j++) {
      if (j == 0) {
        if ((v[1] == i || v[n - 1] == i) && !(v[1] == i && v[n - 1] == i)) {
          check[j] = true;
        }
      } else if (j == n - 1) {
        if ((v[0] == i || v[n - 2] == i) && !(v[0] == i && v[n - 2] == i)) {
          check[j] = true;
        }
      } else {
        if ((v[j - 1] == i || v[j + 1] == i) &&
            !(v[j - 1] == i && v[j + 1] == i)) {
          check[j] = true;
        }
      }
    }

    for (int j = 0; j < n; j++) {
      if (check[j] == true) {
        v[j] = i + 1;
      }
    }
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == k) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}