#include <bits/stdc++.h>
using namespace std;
#define INF 123456789

int n;
int ans[1001][2];
vector<pair<int, int>> v[1001][2];
void dijkstra(int st, int rvs) {
  int dist[1001];
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
    for (auto a : v[now][rvs]) {
      int next_node, tmp;
      tie(next_node, tmp) = a;
      int next_dist = d + tmp;
      if (dist[next_node] > next_dist) {
        dist[next_node] = next_dist;
        pq.push({next_dist, next_node});
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    ans[i][rvs] = dist[i];
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int m, x;
  cin >> n >> m >> x;
  for (int i = 0; i < m; i++) {
    int s, e, d;
    cin >> s >> e >> d;
    v[s][0].push_back({e, d});
    v[e][1].push_back({s, d});
  }
  dijkstra(x, 0);
  dijkstra(x, 1);
  int max_ans = 0;
  for (int i = 1; i <= n; i++) {
    max_ans = max(ans[i][0] + ans[i][1], max_ans);
  }
  cout << max_ans;
  return 0;
}