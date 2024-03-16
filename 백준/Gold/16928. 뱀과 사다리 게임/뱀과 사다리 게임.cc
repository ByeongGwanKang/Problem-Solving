#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ladder;
vector<pair<int, int>> snake;
bool vis[101];
int game[101];
queue<int> q;
bool flag;

void bfs() {
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (int i = 1; i <= 6; i++) {
      flag = false;
      if (now + i <= 100 && !vis[now + i]) {
        for (auto l : ladder) {
          if (l.first == now + i) {
            flag = true;
            if (!vis[l.second]) {
              vis[l.second] = true;
              q.push(l.second);
              game[l.second] = game[now] + 1;
            }
          }
        }
        for (auto s : snake) {
          if (s.first == now + i) {
            flag = true;
            if (!vis[s.second]) {
              vis[s.second] = true;
              q.push(s.second);
              game[s.second] = game[now] + 1;
            }
          }
        }
        if (!flag) {
          vis[now + i] = true;
          q.push(now + i);
          game[now + i] = game[now] + 1;
        }
      }
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int s, e;
    cin >> s >> e;
    ladder.push_back({s, e});
  }
  for (int i = 0; i < m; i++) {
    int s, e;
    cin >> s >> e;
    snake.push_back({s, e});
  }
  vis[1] = true;
  q.push(1);
  bfs();
  cout << game[100];
  return 0;
}
