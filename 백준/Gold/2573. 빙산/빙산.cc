#include <bits/stdc++.h>
using namespace std;

int arr[300][300];
int vis[300][300];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n, m;
queue<pair<int, int>> q;
void bfs() {
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    vis[x][y] = 0;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
        continue;
      }
      //바다라면 몇칸 녹을지 저장
      if (arr[nx][ny] == 0) {
        vis[x][y]++;
      }
      //방문하지 않은 빙산 큐에 추가
      else {
        if (vis[nx][ny] == 0) {
          vis[nx][ny] = -1;
          q.push({nx, ny});
        }
      }
    }
    if (vis[x][y] == 0) {
      vis[x][y] = -1;
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  while (true) {
    bool bfs_flag = false;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] != 0 && vis[i][j] == 0) {
          if (bfs_flag == true) {
            cout << cnt;
            return 0;
          }
          q.push({i, j});
          bfs();
          bfs_flag = true;
        }
      }
    }
    if (bfs_flag == false) {
      cout << 0;
      return 0;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (vis[i][j] > 0) {
          arr[i][j] = max(0, arr[i][j] - vis[i][j]);
        }
      }
    }
    cnt++;
  }
  return 0;
}
