#include <bits/stdc++.h>
using namespace std;

#define INF 123456789
int adj[101][101];
int dist[101][101];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    memset(adj, 0, sizeof(adj));
    memset(dist, 0, sizeof(dist));
    for (int i = 0; i < m; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      adj[a][b] = c;
      adj[b][a] = c;
    }
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (i == j) {
          dist[i][j] = 0;
        } else if (adj[i][j] == 0) {
          dist[i][j] = INF;
        } else {
          dist[i][j] = adj[i][j];
        }
      }
    }
    for (int k = 1; k <= n; k++) {
      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
          dist[i][j] = min(dist[i][k] + dist[k][j], dist[i][j]);
        }
      }
    }
    int frnd;
    cin >> frnd;
    vector<int> v(frnd);
    for (int i = 0; i < frnd; i++) {
      cin >> v[i];
    }
    int ans = INF;
    int ans_room = -1;
    for (int i = 1; i <= n; i++) {
      int sum = 0;
      for (int j = 0; j < frnd; j++) {
        sum += dist[i][v[j]];
      }
      if (ans > sum) {
        ans = sum;
        ans_room = i;
      }
    }
    cout << ans_room << "\n";
  }
  return 0;
}
