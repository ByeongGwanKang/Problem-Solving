#include <bits/stdc++.h>
using namespace std;

char MAP[101][101];
string mini[51];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int r, c;
  cin >> r >> c;
  for (int i = 0; i < r; i++) {
    cin >> mini[i];
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      MAP[i][j] = mini[i][j];
    }
  }
  for (int i = 0; i < r; i++) {
    int k = c;
    for (int j = c - 1; j >= 0; j--) {
      MAP[i][k] = mini[i][j];
      k++;
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      MAP[r + i][j] = mini[r - i - 1][j];
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      MAP[r + i][c + j] = mini[r - i - 1][c - j - 1];
    }
  }
  int a, b;
  cin >> a >> b;
  if (MAP[a - 1][b - 1] == '.') {
    MAP[a - 1][b - 1] = '#';
  } else {
    MAP[a - 1][b - 1] = '.';
  }
  for (int i = 0; i < 2 * r; i++) {
    for (int j = 0; j < 2 * c; j++) {
      cout << MAP[i][j];
    }
    cout << "\n";
  }
  return 0;
}