#include <bits/stdc++.h>
using namespace std;
#define INF 123456789

int pre[1001];
int dist[1001];
vector<pair<int, int>> v[1001];
void dijkstra(int st, int en) {
  fill(dist, dist + 1001, INF);
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  dist[st] = 0;
  pq.push({0, st});
  while (!pq.empty()) {
    int now, d;
    tie(d, now) = pq.top();
    pq.pop();
    if (dist[now] != d) {
      continue;
    }
    for (auto a : v[now]) {
      int next_node, tmp;
      tie(next_node, tmp) = a;
      int next_dist = d + tmp;
      if (dist[next_node] > next_dist) {
        pre[next_node] = now;
        dist[next_node] = next_dist;
        pq.push({next_dist, next_node});
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
  for (int i = 0; i < m; i++) {
    int s, e, d;
    cin >> s >> e >> d;
    v[s].push_back({e, d});
  }
  int st, en;
  cin >> st >> en;
  dijkstra(st, en);
  int tmp = en;
  vector<int> path;
  while (true) {
    path.push_back(tmp);
    if (tmp == st) {
      break;
    }
    tmp = pre[tmp];
  }
  reverse(path.begin(), path.end());
  cout << dist[en] << "\n" << path.size() << "\n";
  for (auto a : path) {
    cout << a << " ";
  }
  return 0;
}