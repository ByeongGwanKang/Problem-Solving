#include <bits/stdc++.h>
using namespace std;

int gear[1000][8];
int t;
bool vis[1000];
void turn(int n, int way) {
  vis[n] = true;
  if (n != 0 && gear[n][6] != gear[n - 1][2] && vis[n - 1] == false) {
    turn(n - 1, -way);
  }
  if (n + 1 < t && gear[n][2] != gear[n + 1][6] && vis[n + 1] == false) {
    turn(n + 1, -way);
  }
  //시계
  if (way == 1) {
    int tmp = gear[n][7];
    for (int i = 7; i > 0; i--) {
      gear[n][i] = gear[n][i - 1];
    }
    gear[n][0] = tmp;
  }
  //반시계
  else {
    int tmp = gear[n][0];
    for (int i = 0; i < 7; i++) {
      gear[n][i] = gear[n][i + 1];
    }
    gear[n][7] = tmp;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> t;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < 8; j++) {
      gear[i][j] = s[j] - '0';
    }
  }
  int k;
  cin >> k;
  for (int i = 0; i < k; i++) {
    fill(vis, vis + 1000, false);
    int num, dir;
    cin >> num >> dir;
    if (dir == -1) {
      turn(num - 1, -1);
    } else {
      turn(num - 1, 1);
    }
  }
  int ans = 0;
  for (int i = 0; i < t; i++) {
    if (gear[i][0] == 1) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}