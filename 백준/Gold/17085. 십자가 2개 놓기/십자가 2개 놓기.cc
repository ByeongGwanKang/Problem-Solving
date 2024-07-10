#include <bits/stdc++.h>
using namespace std;

string arr[15];
bool vis[15][15];
int n, m;

void check(int a, int b, int size) {
  vis[a][b] = true;
  for (int i = 1; i <= size; i++) {
    if (a - i >= 0) vis[a - i][b] = true;
    if (a + i < n) vis[a + i][b] = true;
    if (b - i >= 0) vis[a][b - i] = true;
    if (b + i < m) vis[a][b + i] = true;
  }
}

void uncheck(int a, int b, int size) {
  vis[a][b] = false;
  for (int i = 1; i <= size; i++) {
    if (a - i >= 0) vis[a - i][b] = false;
    if (a + i < n) vis[a + i][b] = false;
    if (b - i >= 0) vis[a][b - i] = false;
    if (b + i < m) vis[a][b + i] = false;
  }
}

int mxsize(int a, int b) {
  int able = min(min(a, n - a - 1), min(b, m - b - 1));
  for (int i = 1; i <= able; i++) {
    if (arr[a + i][b] != '#' || vis[a + i][b])
      return i - 1;
    if (arr[a - i][b] != '#' || vis[a - i][b])
      return i - 1;
    if (arr[a][b + i] != '#' || vis[a][b + i])
      return i - 1;
    if (arr[a][b - i] != '#' || vis[a][b - i])
      return i - 1;
  }
  return able;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  int ans = 1;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] != '#') {
        continue;
      }
      int s = mxsize(i, j);
      for (int k = 0; k <= s; k++) {
        check(i, j, k);
        for (int i2 = 0; i2 < n; i2++) {
          for (int j2 = 0; j2 < m; j2++) {
            if (arr[i2][j2] != '#' || vis[i2][j2]) {
              continue;
            }
            int s2 = mxsize(i2, j2);
            ans = max((k * 4 + 1) * (s2 * 4 + 1), ans);
          }
        }
        uncheck(i, j, k);
      }
    }
  }
  cout << ans;
  return 0;
}