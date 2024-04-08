#include <bits/stdc++.h>
using namespace std;

int light_adj[101][101];
int heavy_adj[101][101];
int light_dist[101][101];
int heavy_dist[101][101];
int ans_dist[101][101];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    light_adj[a][b] = 1;
    heavy_adj[b][a] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (light_adj[i][j]) {
        light_dist[i][j] = light_adj[i][j];
      } else if (i == j) {
        light_dist[i][j] = 0;
      } else {
        light_dist[i][j] = 123456789;
      }
    }
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        light_dist[i][j] =
            min(light_dist[i][j], light_dist[i][k] + light_dist[k][j]);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (heavy_adj[i][j]) {
        heavy_dist[i][j] = heavy_adj[i][j];
      } else if (i == j) {
        heavy_dist[i][j] = 0;
      } else {
        heavy_dist[i][j] = 123456789;
      }
    }
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        heavy_dist[i][j] =
            min(heavy_dist[i][j], heavy_dist[i][k] + heavy_dist[k][j]);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      ans_dist[i][j] = min(light_dist[i][j], heavy_dist[i][j]);
    }
  }

  for (int i = 1; i <= n; i++) {
    int cnt = 0;
    for (int j = 1; j <= n; j++) {
      if (ans_dist[i][j] == 123456789) {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}
