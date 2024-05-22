#include <bits/stdc++.h>
using namespace std;

int k, w, h;
int adj[201][201];
int vis[201][201][31];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int Hx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int Hy[] = {1, 2, 2, 1, -1, -2, -2, -1};
queue<tuple<int, int, int>> q;
bool flag = false;
void bfs() {
  while (!q.empty()) {
    int x, y, depth;
    tie(x, y, depth) = q.front();
    if (x == h - 1 && y == w - 1) {
      cout << vis[x][y][depth];
      flag = true;
      break;
    }
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      //범위확인
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      //벽이라면 컨티뉴
      if (adj[nx][ny] == 1) {
        continue;
      }
      if (vis[nx][ny][depth] == -1) {
        vis[nx][ny][depth] = vis[x][y][depth] + 1;
        q.push({nx, ny, depth});
      }
    }
    if (depth < k) {
      for (int i = 0; i < 8; i++) {
        int nx = x + Hx[i];
        int ny = y + Hy[i];
        //범위확인
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          continue;
        }
        //벽이라면 컨티뉴
        if (adj[nx][ny] == 1) {
          continue;
        }
        if (vis[nx][ny][depth + 1] == -1) {
          vis[nx][ny][depth + 1] = vis[x][y][depth] + 1;
          q.push({nx, ny, depth + 1});
        }
      }
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> k >> w >> h;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> adj[i][j];
    }
  }
  memset(vis, -1, sizeof(vis));
  vis[0][0][0] = 0;
  q.push({0, 0, 0});
  bfs();
  if (flag == false) {
    cout << -1;
  }
  return 0;
}