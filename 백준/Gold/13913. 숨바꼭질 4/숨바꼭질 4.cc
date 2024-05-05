#include <bits/stdc++.h>
using namespace std;

int pv[100001];
int vis[100001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n >> k;
  memset(vis, -1, sizeof(vis));
  queue<int> q;
  q.push(n);
  vis[n] = 0;
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    if (now == k) {
      cout << vis[now] << "\n";
      break;
    }
    for (int i : {now - 1, now + 1, now * 2}) {
      if (i < 0 || i > 100000) {
        continue;
      }
      if (vis[i] != -1) {
        continue;
      }
      q.push(i);
      vis[i] = vis[now] + 1;
      pv[i] = now;
    }
  }
  int iter = k;
  vector<int> ans;
  while (true) {
    if (iter == n) {
      ans.push_back(iter);
      break;
    }
    ans.push_back(iter);
    iter = pv[iter];
  }
  reverse(ans.begin(), ans.end());
  for (auto a : ans) {
    cout << a << " ";
  }
  return 0;
}