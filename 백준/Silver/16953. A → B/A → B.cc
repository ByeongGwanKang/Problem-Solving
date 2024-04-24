#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b;
bool flag = false;
set<ll> vis;
queue<pair<ll, ll>> q;
void bfs() {
  while (!q.empty()) {
    ll now = q.front().first;
    ll cnt = q.front().second;
    q.pop();
    if (now == b) {
      flag = true;
      cout << cnt;
      break;
    }
    if (now > b) {
      continue;
    }
    ll first_temp = now * 2;
    ll second_temp = now * 10 + 1;
    if (vis.find(first_temp) == vis.end()) {
      vis.insert(first_temp);
      q.push({first_temp, cnt + 1});
    }
    if (vis.find(second_temp) == vis.end()) {
      vis.insert(second_temp);
      q.push({second_temp, cnt + 1});
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> a >> b;
  q.push({a, 1});
  bfs();
  if (!flag) {
    cout << -1;
  }
  return 0;
}
