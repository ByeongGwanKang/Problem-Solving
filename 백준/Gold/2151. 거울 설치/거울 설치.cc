#include <bits/stdc++.h>
using namespace std;

int n;
int sx, sy;
char house[50][50];
bool vis[50][50][4];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int ans = INT_MAX;
void DFS(int x, int y, int mirror, int dir) {
  int nx = x + dx[dir];
  int ny = y + dy[dir];
  //이미 정답이 아니거나 범위 밖일때
  if (mirror >= ans || (x < 0 || x >= n || y < 0 || y >= n)) {
    return;
  }
  //도착
  if (house[x][y] == '#' && (x != sx || y != sy)) {
    ans = min(ans, mirror);
    return;
  }
  //벽
  else if (house[x][y] == '*') {
    return;
  } else if (house[x][y] == '.' || (x == sx && y == sy)) {
    if (!vis[nx][ny][dir]) {
      vis[x][y][dir] = true;
      DFS(nx, ny, mirror, dir);
      vis[x][y][dir] = false;
    }
  } else if (house[x][y] == '!') {
    //스킵
    if (!vis[nx][ny][dir]) {
      vis[x][y][dir] = true;
      DFS(nx, ny, mirror, dir);
      vis[x][y][dir] = false;
    }
    //거울 놓기
    int nd = (dir + 1) % 4;
    nx = x + dx[nd];
    ny = y + dy[nd];
    if (!vis[nx][ny][nd]) {
      vis[x][y][nd] = true;
      DFS(nx, ny, mirror + 1, nd);
      vis[x][y][nd] = false;
    }
    nd = (dir + 3) % 4;
    nx = x + dx[nd];
    ny = y + dy[nd];
    if (!vis[nx][ny][nd]) {
      vis[x][y][nd] = true;
      DFS(nx, ny, mirror + 1, nd);
      vis[x][y][nd] = false;
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
      cin >> house[i][j];
      if (house[i][j] == '#') {
        sx = i;
        sy = j;
      }
    }
  }
  for (int i = 0; i < 4; i++) {
    DFS(sx, sy, 0, i);
  }
  cout << ans;
  return 0;
}