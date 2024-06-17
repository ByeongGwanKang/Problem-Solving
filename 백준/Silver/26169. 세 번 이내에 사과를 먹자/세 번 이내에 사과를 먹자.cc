#include <bits/stdc++.h>
using namespace std;

int board[5][5];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
bool flag = false;
void dfs(int x, int y, int cnt, int apple) {
  if (flag == true) {
    return;
  }
  if (board[x][y] == 1) {
    apple++;
  }
  if (apple >= 2) {
    flag = true;
    return;
  }
  if (cnt == 3) {
    return;
  }
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) {
      continue;
    }
    if (board[nx][ny] == -1) {
      continue;
    }
    int tmp = board[x][y];
    board[x][y] = -1;
    dfs(nx, ny, cnt + 1, apple);
    board[x][y] = tmp;
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> board[i][j];
    }
  }
  int r, c;
  cin >> r >> c;
  dfs(r, c, 0, 0);
  if (flag) {
    cout << 1;
  } else {
    cout << 0;
  }
  return 0;
}