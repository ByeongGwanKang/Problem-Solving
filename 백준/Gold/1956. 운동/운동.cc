#include <bits/stdc++.h>
using namespace std;

int adj[401][401];
int dist[401][401];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    adj[a][b] = c;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (adj[i][j] == 0) {
        dist[i][j] = 123456789;
      } else {
        dist[i][j] = adj[i][j];
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
  int ans = 123456789;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      ans = min(ans, dist[i][j] + dist[j][i]);
    }
  }
  if (ans == 123456789) {
    cout << -1;
    return 0;
  }
  cout << ans;
  return 0;
}
