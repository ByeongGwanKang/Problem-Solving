#include <bits/stdc++.h>
using namespace std;

int n, m;
int s, e;
vector<pair<int, int>> v[100001];
bool BFS(int mx) {
  queue<int> q;
  bool vis[100001]={false};
  q.push(s);
  vis[s] = true;
  while (!q.empty()) {
    int now = q.front();
    if (now == e) {
      return true;
    }
    q.pop();
    for (auto a : v[now]) {
      if (vis[a.first])
        continue;
      if (a.second < mx)
        continue;
      q.push(a.first);
      vis[a.first] = true;
    }
  }
  return false;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    v[a].push_back({b, c});
    v[b].push_back({a, c});
  }
  cin >> s >> e;
  int low = 1, high = 1000000000;
  int mid;
  int ans;
  while (low <= high) {
    mid = (low + high) / 2;
    if (BFS(mid)) {
      low = mid + 1;
      ans = mid;
    } else {
      high = mid - 1;
    }
  }
  cout << ans;
  return 0;
}