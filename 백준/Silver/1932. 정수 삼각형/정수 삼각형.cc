#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<vector<int>> ans(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> ans[i][j];
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0) {
        ans[i][j] += ans[i - 1][j];
      } else if (j == i) {
        ans[i][j] += ans[i - 1][j - 1];
      } else {
        ans[i][j] += max(ans[i - 1][j - 1], ans[i - 1][j]);
      }
    }
  }
  int route = 0;
  for (int i = 0; i < n; i++) {
    route = max(route, ans[n - 1][i]);
  }
  cout << route;
  return 0;
}
