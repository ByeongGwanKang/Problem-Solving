#include <bits/stdc++.h>
using namespace std;

int n;
char MAP[1000][1000];
char tmp[1000][1000];
int dir = 0;
pair<int, int> ball;
void rotate() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      tmp[i][j] = MAP[n - j - 1][i];
    }
  }
  memmove(MAP, tmp, sizeof(MAP));
  pair<int, int> p = ball;
  ball.first = p.second;
  ball.second = n - p.first - 1;
}
pair<int, int> drop(int x, int y, int dir) {
  //공 아래로 떨어짐
  if (dir == 0) {
    while (x + 1 < n && MAP[x + 1][y] == '.') {
      x++;
    }
  }
  //공 오른쪽으로 떨어짐
  if (dir == 1) {
    while (y + 1 < n && MAP[x][y + 1] == '.') {
      y++;
    }
  }
  //공 위쪽으로 떨어짐
  if (dir == 2) {
    while (x - 1 >= 0 && MAP[x - 1][y] == '.') {
      x--;
    }
  }
  //공 왼쪽으로 떨어짐
  if (dir == 3) {
    while (y - 1 >= 0 && MAP[x][y - 1] == '.') {
      y--;
    }
  }
  return {x, y};
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int k;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> MAP[i][j];
      if (MAP[i][j] == 'L') {
        MAP[i][j] = '.';
        ball = {i, j};
      }
    }
  }
  for (int i = 0; i < k; i++) {
    char c;
    cin >> c;
    if (c == 'L') {
      dir = (dir + 3) % 4;
    } else {
      dir = (dir + 1) % 4;
    }
    ball = drop(ball.first, ball.second, dir);
  }
  for (int i = 0; i < dir; i++) {
    rotate();
  }
  MAP[ball.first][ball.second] = 'L';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << MAP[i][j];
    }
    cout << "\n";
  }
  return 0;
}