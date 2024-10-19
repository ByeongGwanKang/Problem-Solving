#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll money[500001];
ll ableTime[500001];
bool vis[500001];
vector<int> MAP[500001];
queue<int> q;
void BFS() {
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (auto nxt : MAP[now]) {
      if (vis[nxt] == false) {
        vis[nxt] = true;
        ableTime[nxt] = ableTime[now] + 1;
        q.push(nxt);
      }
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  memset(ableTime, -1, sizeof(ableTime));
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  for (int i = 1; i <= n; i++) {
    cin >> money[i];
  }
  for (int i = 0; i < m; i++) {
    int s, e;
    cin >> s >> e;
    MAP[s].push_back(e);
    MAP[e].push_back(s);
  }
  for (int i = 0; i < y; i++) {
    int val;
    cin >> val;
    q.push(val);
    ableTime[val] = 0;
    vis[val] = true;
  }
  BFS();
  vector<ll> ans(n);
  for (int i = 1; i <= n; i++) {
    if (ableTime[i] == -1 && money[i] != 0) {
      cout << -1;
      return 0;
    }
    ans[i - 1] = ableTime[i] * money[i];
  }
  sort(ans.begin(), ans.end(), greater<int>());
  ll sum = 0;
  for (int i = 0; i < x; i++) {
    sum += ans[i];
  }
  cout << sum;
  return 0;
}