#include <bits/stdc++.h>
using namespace std;

// 11404
int adj[101][101];
int dist[101][101];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (adj[a][b]) {
      adj[a][b] = min(adj[a][b], c);
    } else {
      adj[a][b] = c;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j) {
        dist[i][j] = 0;
      } else if (adj[i][j] != 0) {
        dist[i][j] = adj[i][j];
      } else {
        dist[i][j] = 123456789;
      }
    }
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (dist[i][j] == 123456789) {
        cout << "0 ";
      } else {
        cout << dist[i][j] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
