#include <bits/stdc++.h>
using namespace std;

int MAP[2188][2188];
int a = 0, b = 0, c = 0;
void rec(int y, int x, int s) {
  if (s == 1) {
    if (MAP[y][x] == -1) {
      a++;
    }
    if (MAP[y][x] == 0) {
      b++;
    }
    if (MAP[y][x] == 1) {
      c++;
    }
    return;
  }
  for (int i = y; i < y + s; i++) {
    for (int j = x; j < x + s; j++) {
      if (MAP[i][j] != MAP[y][x]) {
        rec(y, x, s / 3);
        rec(y, x + s / 3, s / 3);
        rec(y, x + 2 * s / 3, s / 3);
        rec(y + s / 3, x, s / 3);
        rec(y + s / 3, x + s / 3, s / 3);
        rec(y + s / 3, x + 2 * s / 3, s / 3);
        rec(y + 2 * s / 3, x, s / 3);
        rec(y + 2 * s / 3, x + s / 3, s / 3);
        rec(y + 2 * s / 3, x + 2 * s / 3, s / 3);
        return;
      }
    }
  }
  if (MAP[y][x] == -1) {
    a++;
  }
  if (MAP[y][x] == 0) {
    b++;
  }
  if (MAP[y][x] == 1) {
    c++;
  }
  return;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> MAP[i][j];
    }
  }
  rec(0, 0, n);
  cout << a << "\n" << b << "\n" << c;
  return 0;
}