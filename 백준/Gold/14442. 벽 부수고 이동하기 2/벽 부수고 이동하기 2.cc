#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int MAP[1000][1000];
int dist[1000][1000][11];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
queue<tuple<int, int, int>> q;
int bfs() {
  while (!q.empty()) {
    int x = get<0>(q.front());
    int y = get<1>(q.front());
    int wall = get<2>(q.front());
    if (x == n - 1 && y == m - 1) {
      return dist[x][y][wall];
    }
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
        continue;
      }
      //벽이라면
      if (MAP[nx][ny] == 1) {
        //벽 이미 부쉈으면
        if (wall == k) {
          continue;
        }
        //방문하지 않았다면
        else if (dist[nx][ny][wall-1] == 0) {
          dist[nx][ny][wall+1] = dist[x][y][wall] + 1;
          q.push(make_tuple(nx, ny, wall+1));
        }
      }
      //길이라면
      else {
        //방문하지 않았다면
        if (dist[nx][ny][wall] == 0) {
          dist[nx][ny][wall] = dist[x][y][wall] + 1;
          q.push(make_tuple(nx, ny, wall));
        }
      }
    }
  }
  return -1;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m>>k;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++) {
      MAP[i][j] = s[j] - '0';
    }
  }
  q.push(make_tuple(0, 0, 0));
  dist[0][0][0] = dist[0][0][1] = 1;
  cout << bfs();
  return 0;
}