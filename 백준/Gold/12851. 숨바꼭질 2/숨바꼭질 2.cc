#include <bits/stdc++.h>
using namespace std;

int n, k;
queue<int> q;
int vis[100001];
int dist[100001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> k;
  q.push(n);
  vis[n] = 1;
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (int i : {now - 1, now + 1, now * 2}) {
      if (i < 0 || i > 100000) {
        continue;
      }
      //이미 방문했다면 최단거리인지 체크
      if (vis[i] != 0) {
        if (dist[now] + 1 == dist[i]) {
          vis[i] += vis[now];
        }
      } else {
        vis[i] = vis[now];
        dist[i] = dist[now] + 1;
        q.push(i);
      }
    }
  }
  cout << dist[k] << "\n" << vis[k];
  return 0;
}