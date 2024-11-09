#include <bits/stdc++.h>
using namespace std;

int MAP[8][8];
pair<int, int> previ[8][8];
int dx[4] = {1, 1, -1, -1};
int dy[4] = {-1, 1, -1, 1};
void BFS(int x, int y, int ex, int ey) {
  queue<pair<int, int>> q;
  q.push({x, y});
  while (!q.empty()) {
    int nowx = q.front().first;
    int nowy = q.front().second;
    if (nowx == ex && nowy == ey) {
      cout << MAP[nowx][nowy] - 1 << " ";
      vector<int> ans;
      while (true) {
        ans.push_back(nowy);
        ans.push_back(nowx);
        if (previ[nowx][nowy].first == -1) {
          break;
        }
        int tmp = nowx;
        nowx = previ[nowx][nowy].first;
        nowy = previ[tmp][nowy].second;
      }
      reverse(ans.begin(), ans.end());
      for (int i = 0; i < ans.size(); i++) {
        if (i % 2 == 0) {
          cout << char(ans[i] + 'A') << " ";
        } else {
          cout << ans[i] + 1 << " ";
        }
      }
      return;
    }
    q.pop();
    for (int i = 1; i <= 7; i++) {
      for (int j = 0; j < 4; j++) {
        int nx = nowx + i * dx[j];
        int ny = nowy + i * dy[j];
        if (nx < 0 || ny < 0 || nx >= 8 || ny >= 8) {
          continue;
        }
        if (MAP[nx][ny] != 0) {
          continue;
        }
        MAP[nx][ny] = MAP[nowx][nowy] + 1;
        previ[nx][ny] = {nowx, nowy};
        q.push({nx, ny});
      }
    }
  }
  cout << "Impossible";
  return;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    memset(MAP, 0, sizeof(MAP));
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        previ[i][j] = {-1, -1};
      }
    }
    char sx, ex;
    int sy, ey;
    cin >> sx >> sy >> ex >> ey;
    int x = sx - 'A';
    int y = sy - 1;
    int cx = ex - 'A';
    int cy = ey - 1;
    MAP[x][y] = 1;
    BFS(x, y, cx, cy);
    cout << "\n";
  }
  return 0;
}