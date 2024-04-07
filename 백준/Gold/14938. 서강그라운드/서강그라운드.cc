#include <bits/stdc++.h>

using namespace std;

int adj[101][101];

int dist[101][101];

int main(void) {

  ios::sync_with_stdio(false);

  cin.tie(NULL);

  cout.tie(NULL);

  int n, m, r;

  cin >> n >> m >> r;

  vector<int> item(n + 1);

  for (int i = 1; i <= n; i++) {

    cin >> item[i];

  }

  for (int i = 0; i < r; i++) {

    int a, b, c;

    cin >> a >> b >> c;

    adj[a][b] = c;

    adj[b][a] = c;

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

        if (i == j) {

          dist[i][j] = 0;

        } else {

          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

        }

      }

    }

  }

  int ans = 0;

  for (int i = 1; i <= n; i++) {

    int tmp = 0;

    for (int j = 1; j <= n; j++) {

      if (dist[i][j] <= m) {

        tmp += item[j];

      }

    }

    ans = max(ans, tmp);

  }

  cout << ans;

  return 0;

}

