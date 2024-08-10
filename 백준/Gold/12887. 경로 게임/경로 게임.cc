#include <bits/stdc++.h>
using namespace std;

int m;
char s[2][50];
int dx[] = {0, 1, -1};
int dy[] = {1, 0, 0};
queue<pair<int, int>> q;
int MAP[2][50];
void BFS() {
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 3; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx >= 2 || ny >= m || nx < 0)
        continue;
      if (s[nx][ny] == '#')
        continue;
      if (MAP[nx][ny] > MAP[x][y] + 1) {
        MAP[nx][ny] = MAP[x][y] + 1;
        q.push({nx, ny});
      }
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> m;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < m; j++) {
      cin >> s[i][j];
    }
  }
  int white = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] == '.') {
        white++;
      }
      MAP[i][j] = 123456789;
    }
  }
  if (s[0][0] == '.') {
    q.push({0, 0});
    MAP[0][0] = 1;
  }

  if (s[1][0] == '.') {
    q.push({1, 0});
    MAP[1][0] = 1;
  }
  BFS();
  cout << white - min(MAP[0][m - 1], MAP[1][m - 1]);
  return 0;
}