#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
vector<vector<int>> graph;
vector<int> ans;
void dfs(int now) {
  for (auto a : graph[now]) {
    if (vis[a] == false) {
      vis[a] = true;
      ans[a] = now;
      dfs(a);
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vis.resize(n + 1, false);
  graph.resize(n + 1);
  ans.resize(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int s, e;
    cin >> s >> e;
    graph[s].push_back(e);
    graph[e].push_back(s);
  }
  vis[1] = true;
  dfs(1);
  for (int i = 2; i <= n; i++) {
    cout << ans[i] << "\n";
  }
  return 0;
}