#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int MAP[1000][1000];
int dist[1000][1000][11][2];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
queue<tuple<int, int, int, int>> q;
int bfs() {
  while (!q.empty()) {
    int x = get<0>(q.front());
    int y = get<1>(q.front());
    int wall = get<2>(q.front());
    //0이라면 낮
    int night = get<3>(q.front());
    if (x == n - 1 && y == m - 1) {
      return dist[x][y][wall][night];
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
        //낮이라면
        if(night==0){
            //벽 이미 부쉈으면
            if (wall == k) {
              continue;
            }
            //방문하지 않았다면
            else if (dist[nx][ny][wall-1][abs(night-1)] == 0) {
                dist[nx][ny][wall+1][abs(night-1)] = dist[x][y][wall][night] + 1;
                q.push(make_tuple(nx, ny, wall+1, abs(night-1)));
            }
        }
        else{
            if(dist[x][y][wall][abs(night-1)]==0){
                dist[x][y][wall][abs(night-1)]=dist[x][y][wall][night]+1;
                q.push(make_tuple(x, y, wall, abs(night-1)));
            }
        }
      }
      //길이라면
      else {
        //방문하지 않았다면
        if (dist[nx][ny][wall][abs(night-1)] == 0) {
          dist[nx][ny][wall][abs(night-1)] = dist[x][y][wall][night] + 1;
          q.push(make_tuple(nx, ny, wall, abs(night-1)));
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
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++) {
      MAP[i][j] = s[j] - '0';
    }
  }
  q.push(make_tuple(0, 0, 0, 0));
  dist[0][0][0][0] = dist[0][0][1][0] = 1;
  cout << bfs();
  return 0;
}