#include <bits/stdc++.h>
using namespace std;
using pll = pair<long long, long long>;
using ll = long long;

priority_queue<pll, vector<pll>, greater<pll>> pq; //난이도,인덱스
bool vis[100001];
vector<pll> tip[100001]; //인덱스,감소 난이도
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<ll> hard(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> hard[i];
  }
  int p;
  cin >> p;
  for (int i = 0; i < p; i++) {
    ll a, b, t;
    cin >> a >> b >> t;
    hard[b] += t;
    tip[a].push_back({b, t});
  }
  for (int i = 1; i <= n; i++) {
    pq.push({hard[i], i});
  }
  ll ans = 0;
  int cnt = 0;
  while (cnt < m) {
    auto now = pq.top();
    pq.pop();
    if (vis[now.second]) {
      continue;
    }
    vis[now.second] = true;
    for (auto a : tip[now.second]) {
      if (vis[a.first]) {
        continue;
      }
      hard[a.first] -= a.second;
      pq.push({hard[a.first], a.first});
    }
    ans = max(ans, now.first);
    cnt++;
  }
  cout << ans;
  return 0;
}