#include <bits/stdc++.h>
using namespace std;

string MAP[10];
int dx1[] = {1, 2, 0, 0, 1, 2, 3, 3};
int dy1[] = {0, 0, 1, 2, 3, 3, 1, 2};
int dx2[] = {1, 2, 4, 5, 1, 2, 4, 5, 0, 0, 0, 0, 6, 6, 6, 6};
int dy2[] = {0, 0, 0, 0, 6, 6, 6, 6, 1, 2, 4, 5, 1, 2, 4, 5};
int dx3[] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 5, 7, 8,
             1, 2, 4, 5, 7, 8, 9, 9, 9, 9, 9, 9};
int dy3[] = {1, 2, 4, 5, 7, 8, 0, 0, 0, 0, 0, 0,
             9, 9, 9, 9, 9, 9, 1, 2, 4, 5, 7, 8};
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 0; i < 10; i++) {
    cin >> MAP[i];
  }
  //빠진 성냥 찾기
  int A = 0;
  for (int i = 0; i < 10; i += 3) {
    for (int j = 1; j < 10; j += 3) {
      if (MAP[i][j] != '-') {
        A++;
      }
      if (MAP[j][i] != '|') {
        A++;
      }
    }
  }
  cout << A << " ";
  //정사각형 찾기
  int B = 14;
  for (int i = 0; i <= 6; i += 3) {
    for (int j = 0; j <= 6; j += 3) {
      for (int k = 0; k < 8; k++) {
        int x = i + dx1[k];
        int y = j + dy1[k];
        if (MAP[x][y] == '.') {
          B--;
          break;
        }
      }
    }
  }
  for (int i = 0; i <= 3; i += 3) {
    for (int j = 0; j <= 3; j += 3) {
      for (int k = 0; k < 16; k++) {
        int x = i + dx2[k];
        int y = j + dy2[k];
        if (MAP[x][y] == '.') {
          B--;
          break;
        }
      }
    }
  }
  for (int i = 0; i <= 0; i += 3) {
    for (int j = 0; j <= 0; j += 3) {
      for (int k = 0; k < 24; k++) {
        int x = i + dx3[k];
        int y = j + dy3[k];
        if (MAP[x][y] == '.') {
          B--;
          break;
        }
      }
    }
  }
  cout << B;
  return 0;
}