#include <bits/stdc++.h>
using namespace std;

const int INF = 123456789;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    vector<pair<int, int>> adj[10001];
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    vector<int> dist(10001, INF);
    int n, d, c;
    cin >> n >> d >> c;
    for (int i = 0; i < d; i++) {
      int a, b, s;
      cin >> a >> b >> s;
      adj[b].push_back({s, a});
    }
    pq.push({0, c});
    dist[c] = 0;
    while (!pq.empty()) {
      int nowDist = pq.top().first;
      int nowNode = pq.top().second;
      pq.pop();
      if (dist[nowNode] != nowDist) {
        continue;
      }
      for (auto nxt : adj[nowNode]) {
        if (dist[nxt.second] <= dist[nowNode] + nxt.first) {
          continue;
        }
        dist[nxt.second] = dist[nowNode] + nxt.first;
        pq.push({dist[nxt.second], nxt.second});
      }
    }
    int ans = -1;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (dist[i] == INF) {
        continue;
      }
      cnt++;
      if (ans < dist[i]) {
        ans = dist[i];
      }
      ans = max(dist[i], ans);
    }
    cout << cnt << " " << ans << "\n";
  }
  return 0;
}