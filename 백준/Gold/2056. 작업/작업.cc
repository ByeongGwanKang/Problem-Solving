#include <bits/stdc++.h>
using namespace std;

vector<int> v[10001];
int t[10001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> degree(n + 1);
  vector<int> res(n + 1);
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> t[i] >> num;
    res[i] = t[i];
    for (int j = 0; j < num; j++) {
      int prev;
      cin >> prev;
      degree[i]++;
      v[prev].push_back(i);
    }
  }
  queue<int> q;
  for (int i = 1; i <= n; i++) {
    if (degree[i] == 0) {
      q.push(i);
    }
  }
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (auto a : v[now]) {
      degree[a]--;
      res[a] = max(res[a], res[now] + t[a]);
      if (degree[a] == 0) {
        q.push(a);
      }
    }
  }
  int ans = -1;
  for (int i = 1; i <= n; i++) {
    ans = max(ans, res[i]);
  }
  cout << ans;
  return 0;
}