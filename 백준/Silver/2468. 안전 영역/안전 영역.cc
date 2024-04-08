#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
bool vis[101][101];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n;
int k;
queue<pair<int, int>> q;
void bfs() {
  while (!q.empty()) {
    int nx = q.front().first;
    int ny = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int x = nx + dx[i];
      int y = ny + dy[i];
      if (x < 0 || x >= n || y < 0 || y >= n) {
        continue;
      }
      if (vis[x][y]) {
        continue;
      }
      if (arr[x][y] > k) {
        vis[x][y] = true;
        q.push({x, y});
      }
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int ans = 1;
  for (k = 1; k <= 100; k++) {
    memset(vis, 0, sizeof(vis));
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (vis[i][j] == false && arr[i][j] > k) {
          vis[i][j] = true;
          cnt++;
          q.push({i, j});
          bfs();
        }
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans;
  return 0;
}
