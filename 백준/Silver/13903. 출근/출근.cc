#include <bits/stdc++.h>
using namespace std;

int r, c;
int arr[1005][1005];
int vis[1005][1005];
vector<int> dx;
vector<int> dy;
queue<pair<int, int>> q;
void BFS() {
  while (!q.empty()) {
    int nowx = q.front().first;
    int nowy = q.front().second;
    q.pop();
    for (int i = 0; i < dx.size(); i++) {
      int nx = nowx + dx[i];
      int ny = nowy + dy[i];
      if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
        continue;
      }
      if (arr[nx][ny] == 1 && vis[nx][ny] == 0) {
        if (nx == r - 1) {
          cout << vis[nowx][nowy];
          return;
        }
        vis[nx][ny] = vis[nowx][nowy] + 1;
        q.push({nx, ny});
      }
    }
  }
  cout << -1;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> r >> c;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
    }
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    dx.push_back(x);
    dy.push_back(y);
  }
  for (int i = 0; i < c; i++) {
    if (arr[0][i] == 1) {
      q.push({0, i});
      vis[0][i] = 1;
    }
  }
  BFS();
  return 0;
}