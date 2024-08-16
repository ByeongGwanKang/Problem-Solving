#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> adj[1001];
  vector<int> degree(n + 1);
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    int prev;
    for (int j = 0; j < k; j++) {
      int val;
      cin >> val;
      if (j == 0) {
        prev = val;
        continue;
      }
      adj[prev].push_back(val);
      degree[val]++;
      prev = val;
    }
  }
  queue<int> q;
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    if (degree[i] == 0) {
      q.push(i);
      ans.push_back(i);
    }
  }
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (auto a : adj[now]) {
      degree[a]--;
      if (degree[a] == 0) {
        q.push(a);
        ans.push_back(a);
      }
    }
  }
  if (ans.size() != n) {
    cout << 0;
  } else {
    for (auto a : ans) {
      cout << a << "\n";
    }
  }
  return 0;
}