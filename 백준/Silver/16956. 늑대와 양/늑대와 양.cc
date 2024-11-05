#include <bits/stdc++.h>
using namespace std;

char MAP[501][501];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int r, c;
  cin >> r >> c;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> MAP[i][j];
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (MAP[i][j] == 'S') {
        for (int k = 0; k < 4; k++) {
          int nx = i + dx[k];
          int ny = j + dy[k];
          if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
            continue;
          }
          if (MAP[nx][ny] == 'W') {
            cout << 0;
            return 0;
          }
          if (MAP[nx][ny] == 'S') {
            continue;
          }
          MAP[nx][ny] = 'D';
        }
      }
    }
  }
  cout << "1\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << MAP[i][j];
    }
    cout << "\n";
  }
  return 0;
}