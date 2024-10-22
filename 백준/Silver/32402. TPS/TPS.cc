#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int cx = 0, cy = -1, px = 0, py = 0;
  int dir = 0;
  while (n--) {
    char c;
    cin >> c;
    if (c == 'W') {
      px += dx[dir];
      py += dy[dir];
      cx += dx[dir];
      cy += dy[dir];
    }
    if (c == 'A') {
      int tmp = dir - 1;
      if (tmp == -1) {
        tmp = 3;
      }
      px += dx[tmp];
      py += dy[tmp];
      cx += dx[tmp];
      cy += dy[tmp];
    }
    if (c == 'S') {
      int tmp = dir + 2;
      tmp %= 4;
      px += dx[tmp];
      py += dy[tmp];
      cx += dx[tmp];
      cy += dy[tmp];
    }
    if (c == 'D') {
      int tmp = dir + 1;
      tmp %= 4;
      px += dx[tmp];
      py += dy[tmp];
      cx += dx[tmp];
      cy += dy[tmp];
    }
    if (c == 'M') {
      char tmp;
      cin >> tmp;
      if (tmp == 'R') {
        if (dir == 0) {
          cx--;
          cy++;
        }
        if (dir == 1) {
          cx++;
          cy++;
        }
        if (dir == 2) {
          cx++;
          cy--;
        }
        if (dir == 3) {
          cx--;
          cy--;
        }
        dir++;
        dir %= 4;
      } else {
        if (dir == 0) {
          cx++;
          cy++;
        }
        if (dir == 1) {
          cx++;
          cy--;
        }
        if (dir == 2) {
          cx--;
          cy--;
        }
        if (dir == 3) {
          cx--;
          cy++;
        }
        dir--;
        if (dir == -1) {
          dir = 3;
        }
      }
    }
    cout << px << " " << py << " " << cx << " " << cy << "\n";
  }
  return 0;
}