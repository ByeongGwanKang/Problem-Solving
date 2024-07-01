#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
vector<int> v;
void dfs(int now) {
  if (vis[v[now]]) {
    return;
  }
  vis[v[now]] = true;
  dfs(v[now]);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    v.resize(n + 1, 0);
    vis.clear();
    vis.resize(n + 1, false);
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (vis[i] == false) {
        vis[i] = true;
        dfs(i);
        cnt++;
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}