#include <bits/stdc++.h>
using namespace std;

char A[100][100];
char B[100][100];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, r, c;
  cin >> n >> r >> c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((i + j) % 2 == 0) {
        A[i][j] = 'v';
        B[i][j] = '.';
      } else {
        A[i][j] = '.';
        B[i][j] = 'v';
      }
    }
  }
  if (A[r - 1][c - 1] == 'v') {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << A[i][j];
      }
      cout << "\n";
    }
  } else {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << B[i][j];
      }
      cout << "\n";
    }
  }
  return 0;
}