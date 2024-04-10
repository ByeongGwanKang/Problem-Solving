#include <bits/stdc++.h>
using namespace std;

int l, r, c;
int arr[31][31][31];
char building[31][31][31];
int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};
queue<pair<pair<int, int>, int>> q;
bool escape;

void bfs() {
  while (!q.empty()) {
    if (escape) {
      break;
    }
    int nx = q.front().first.first;
    int ny = q.front().first.second;
    int nz = q.front().second;
    q.pop();
    for (int i = 0; i < 6; i++) {
      int x = nx + dx[i];
      int y = ny + dy[i];
      int z = nz + dz[i];
      if (x < 0 || y < 0 || z < 0 || x >= l || y >= r || z >= c) {
        continue;
      }
      if (building[x][y][z] == '#' || arr[x][y][z] > 0) {
        continue;
      }
      arr[x][y][z] = arr[nx][ny][nz] + 1;
      if (building[x][y][z] == 'E') {
        cout << "Escaped in " << arr[x][y][z] << " minute(s).\n";
        escape = true;
        break;
      }
      q.push({{x, y}, z});
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (true) {
    cin >> l >> r >> c;
    if (l == 0 && r == 0 && c == 0) {
      break;
    }
    escape = false;
    for (int i = 0; i < l; i++) {
      for (int j = 0; j < r; j++) {
        fill(arr[i][j], arr[i][j] + c, 0);
      }
    }
    for (int i = 0; i < l; i++) {
      for (int j = 0; j < r; j++) {
        for (int k = 0; k < c; k++) {
          cin >> building[i][j][k];
          if (building[i][j][k] == 'S') {
            q.push({{i, j}, k});
            arr[i][j][k] = 0;
          } else if (building[i][j][k] == '.') {
            arr[i][j][k] = -1;
          }
        }
      }
    }
    bfs();
    while (!q.empty()) {
      q.pop();
    }
    if (!escape) {
      cout << "Trapped!\n";
    }
  }
  return 0;
}
