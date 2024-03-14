#include <bits/stdc++.h>
using namespace std;

int adj[101][101];
int sumarr[101];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a][b] = 1;
    adj[b][a] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i != j && adj[i][j] != 1) {
        adj[i][j] = 1000000;
      }
    }
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
      }
    }
  }
  int ans = 123456;
  for (int i = 1; i <= n; i++) {
    int sum = 0;
    for (int j = 1; j <= n; j++) {
      if (i == j) {
        continue;
      }
      sum += adj[i][j];
    }
    sumarr[i] = sum;
    ans = min(sum, ans);
  }
  for (int i = 1; i <= n; i++) {
    if (sumarr[i] == ans) {
      cout << i;
      return 0;
    }
  }
  return 0;
}
