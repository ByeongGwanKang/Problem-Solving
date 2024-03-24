#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> arr(8, vector<int>(8, 0));
vector<vector<int>> after(8, vector<int>(8, 0));
vector<vector<int>> temp(8, vector<int>(8, 0));
bool vis[64];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
queue<pair<int, int>> q;
vector<pair<int, int>> canWall;
vector<pair<int, int>> virus;
int ans = -1;

void bfs() {
  copy(temp.begin(), temp.end(), after.begin());
  for (int i = 0; i < virus.size(); i++) {
    q.push(virus[i]);
  }
  while (!q.empty()) {
    int nowx = q.front().first;
    int nowy = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int next_x = nowx + dx[i];
      int next_y = nowy + dy[i];
      //범위 밖이라 확산 못함
      if (next_x < 0 || next_x >= n || next_y < 0 || next_y >= m) {
        continue;
      }
      if (after[next_x][next_y] == 0) {
        after[next_x][next_y] = 2;
        q.push({next_x, next_y});
      }
    }
  }
  int safe = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (after[i][j] == 0) {
        safe++;
      }
    }
  }
  ans = max(ans, safe);
}

void recursive(int cnt, int idx) {
  if (cnt == 3) {
    copy(arr.begin(), arr.end(), temp.begin());
    int wallcnt = 0;
    for (int i = 0; i < canWall.size(); i++) {
      if (vis[i]) {
        int a = canWall[i].first;
        int b = canWall[i].second;
        temp[a][b] = 1;
        wallcnt++;
        if (wallcnt == 3) {
          break;
        }
      }
    }
    bfs();
    return;
  }
  for (int i = idx; i < canWall.size(); i++) {

    if (!vis[i]) {
      vis[i] = true;
      recursive(cnt + 1, i);
      vis[i] = false;
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 0) {
        canWall.push_back({i, j});
      }
      if (arr[i][j] == 2) {
        virus.push_back({i, j});
      }
    }
  }
  recursive(0, 0);
  cout << ans;
  return 0;
}
