#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll s, t;
queue<pair<ll, string>> q;
set<ll> vis;
char op[4] = {'*', '+', '-', '/'};
ll cal(ll n, int idx) {
  if (idx == 0) {
    return n * n;
  }
  if (idx == 1) {
    return n + n;
  }
  if (idx == 2) {
    return 0;
  }
  if (idx == 3) {
    return 1;
  }
  return -1;
}
string BFS() {
  while (!q.empty()) {
    ll now = q.front().first;
    string ans = q.front().second;
    q.pop();
    if (now == t) {
      return ans;
    }
    for (int i = 0; i < 4; i++) {
      ll nxt = cal(now, i);
      if (nxt == 0) {
        continue;
      }
      if (vis.find(nxt) != vis.end()) {
        continue;
      }
      vis.insert(nxt);
      q.push({nxt, ans + op[i]});
    }
  }
  return "unable";
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> s >> t;
  if (s == t) {
    cout << 0;
    return 0;
  }
  q.push({s, ""});
  string res = BFS();
  if (res == "unable") {
    cout << -1;
  } else {
    cout << res;
  }
  return 0;
}