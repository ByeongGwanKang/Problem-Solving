#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> v;
queue<pair<int, int>> q;
bool vis[101][101];
int dx[] = {0, 1};
int dy[] = {1, 0};
void bfs() {
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 2; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx >= n || ny >= n) {
        continue;
      }
      if (v[nx][ny] == 'x'||vis[nx][ny]==true) {
        continue;
      }
      vis[nx][ny] = true;
      q.push({nx, ny});
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  q.push({0, 0});
  vis[0][0] = true;
  bfs();
  if (vis[n - 1][n - 1]) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}