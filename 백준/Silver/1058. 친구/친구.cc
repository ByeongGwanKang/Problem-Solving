#include <bits/stdc++.h>
using namespace std;

#define INF 123456789;
int dist[51][51];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char c;
      cin >> c;
      if (c == 'Y') {
        dist[i][j] = 1;
      } else {
        dist[i][j] = INF;
      }
    }
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) {
          dist[i][j] = INF;
        } else {
          dist[i][j] = min(dist[i][k] + dist[k][j], dist[i][j]);
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (dist[i][j] <= 2) {
        cnt++;
      }
    }
    ans = max(cnt, ans);
  }
  cout << ans;
  return 0;
}
