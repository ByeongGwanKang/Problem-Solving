#include <bits/stdc++.h>
using namespace std;


int n, m;
vector<int> adj[501];
vector<int> rvs[501];
bool vis[501];
queue<int> q;
int cnt;
void bfs() {
  while (!q.empty()) {
    cnt++;
    int now = q.front();
    q.pop();
    for (auto a : adj[now]) {
      if (vis[a] == false) {
        vis[a] = true;
        q.push(a);
      }
    }
  }
}
void rbfs() {
  while (!q.empty()) {
    cnt++;
    int now = q.front();
    q.pop();
    for (auto a : rvs[now]) {
      if (vis[a] == false) {
        vis[a] = true;
        q.push(a);
      }
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    rvs[b].push_back(a);
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    cnt = 0;
    memset(vis, 0, sizeof(vis));
    q.push(i);
    vis[i] = true;
    bfs();
    memset(vis, 0, sizeof(vis));
    q.push(i);
    vis[i] = true;
    rbfs();
    if (cnt == n + 1) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}
