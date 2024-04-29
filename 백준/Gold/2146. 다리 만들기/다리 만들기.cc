#include <bits/stdc++.h>
using namespace std;

int n;
int MAP[100][100];
int island[100][100];
bool is_vis[100][100];
int is_num = 1;
int vis[100][100];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int cnt;
queue<pair<int, int>> q;
//하나의 섬마다 하나의 번호 부여
void is_bfs() {
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
        continue;
      }
      if (MAP[nx][ny] == 1 && is_vis[nx][ny] == false) {
        island[nx][ny] = is_num;
        is_vis[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
}

void bfs(int key) {
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
        continue;
      }
      //섬이고 다른 섬이라면 cnt설정 후 큐 다빼고 리턴
      if (island[nx][ny] != 0 && island[nx][ny] != key) {
        cnt = vis[x][y];
        while (!q.empty()) {
          q.pop();
        }
        return;
      }
      //아니라면 거리1추가 후 큐에 푸쉬
      else if (vis[nx][ny] == 0) {
        vis[nx][ny] = vis[x][y] + 1;
        q.push({nx, ny});
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> MAP[i][j];
    }
  }
  //섬 구분 로직
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (MAP[i][j] == 1 && is_vis[i][j] == false) {
        is_vis[i][j] = true;
        island[i][j] = is_num;
        q.push({i, j});
        is_bfs();
        is_num++;
      }
    }
  }
  int ans = 123456789;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (island[i][j] != 0) {
        memset(vis, 0, sizeof(vis));
        q.push({i, j});
        bfs(island[i][j]);
        ans = min(ans, cnt);
      }
    }
  }
  cout << ans;
  return 0;
}