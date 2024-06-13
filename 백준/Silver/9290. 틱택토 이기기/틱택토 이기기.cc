#include <bits/stdc++.h>
using namespace std;

string arr[3];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[j];
    }
    char my;
    cin >> my;
    bool win = false;
    int x, y;
    //가로
    for (int j = 0; j < 3; j++) {
      int cnt = 0;
      win = false;
      for (int k = 0; k < 3; k++) {
        if (arr[j][k] == my) {
          cnt++;
        }
        if (arr[j][k] == '-') {
          win = true;
          x = j;
          y = k;
        }
      }
      if (cnt == 2 && win == true) {
        arr[x][y] = my;
        cout << "Case " << i << ":\n";
        for (int j = 0; j < 3; j++) {
          for (int k = 0; k < 3; k++) {
            cout << arr[j][k];
          }
          cout << "\n";
        }
        break;
      }
    }
    //세로
    for (int j = 0; j < 3; j++) {
      int cnt = 0;
      for (int k = 0; k < 3; k++) {
        if (arr[k][j] == my) {
          cnt++;
        }
        if (arr[k][j] == '-') {
          win = true;
          x = k;
          y = j;
        }
      }
      if (cnt == 2 && win == true) {
        arr[x][y] = my;
        cout << "Case " << i << ":\n";
        for (int j = 0; j < 3; j++) {
          for (int k = 0; k < 3; k++) {
            cout << arr[j][k];
          }
          cout << "\n";
        }
        break;
      }
    }
    //대각
    int cnt = 0;
    win = false;
    if (arr[0][2] == my) {
      cnt++;
    }
    if (arr[1][1] == my) {
      cnt++;
    }
    if (arr[2][0] == my) {
      cnt++;
    }
    if (arr[0][2] == '-') {
      win = true;
      x = 0;
      y = 2;
    }
    if (arr[1][1] == '-') {
      win = true;
      x = 1;
      y = 1;
    }
    if (arr[2][0] == '-') {
      win = true;
      x = 2;
      y = 0;
    }
    if (cnt == 2 && win == true) {
      arr[x][y] = my;
      cout << "Case " << i << ":\n";
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          cout << arr[j][k];
        }
        cout << "\n";
      }
    }
    cnt = 0;
    win = false;
    if (arr[0][0] == my) {
      cnt++;
    }
    if (arr[1][1] == my) {
      cnt++;
    }
    if (arr[2][2] == my) {
      cnt++;
    }
    if (arr[0][0] == '-') {
      win = true;
      x = 0;
      y = 0;
    }
    if (arr[1][1] == '-') {
      win = true;
      x = 1;
      y = 1;
    }
    if (arr[2][2] == '-') {
      win = true;
      x = 2;
      y = 2;
    }
    if (cnt == 2 && win == true) {
      arr[x][y] = my;
      cout << "Case " << i << ":\n";
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          cout << arr[j][k];
        }
        cout << "\n";
      }
    }
  }
  return 0;
}