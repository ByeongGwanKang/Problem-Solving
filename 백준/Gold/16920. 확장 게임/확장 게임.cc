#include <bits/stdc++.h>
using namespace std;

int n, m, p;
vector<int> s;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
bool vis[1000][1000];
char board[1000][1000];
int ans[10];
queue<tuple<int, int, int>> q[10];
void BFS() {
  while (true) {
    bool flag = false;
    for (int i = 0; i < p; i++) {
      queue<tuple<int, int, int>> nq;
      while (!q[i].empty()) {
        int nowx = get<0>(q[i].front());
        int nowy = get<1>(q[i].front());
        int moved = get<2>(q[i].front());
        q[i].pop();
        if (moved >= s[i]) {
          nq.push({nowx, nowy, 0});
          continue;
        }
        for (int dir = 0; dir < 4; dir++) {
          int nx = nowx + dx[dir];
          int ny = nowy + dy[dir];
          if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
            continue;
          }
          if (vis[nx][ny] != 0) {
            continue;
          }
          q[i].push({nx, ny, moved + 1});
          vis[nx][ny] = true;
          ans[i]++;
          flag = true;
        }
      }
      q[i] = nq;
    }
    if (!flag) {
      break;
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m >> p;
  s.resize(p);
  vector<pair<int, int>> start[10];
  for (int i = 0; i < p; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char tmp;
      cin >> tmp;
      if (tmp > '0' && tmp <= '9') {
        ans[tmp - '1']++;
        q[tmp - '1'].push({i, j, 0});
        vis[i][j] = true;
      } else if (tmp == '#') {
        vis[i][j] = true;
      }
    }
  }
  BFS();
  for (int i = 0; i < p; i++) {
    cout << ans[i] << " ";
  }
  return 0;
}