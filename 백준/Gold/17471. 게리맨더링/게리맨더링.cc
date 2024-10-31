#include <bits/stdc++.h>
using namespace std;

bool MAP[11][11];
vector<int> people;
bool team[11];
bool vis[11];
int n;
int ans = INT_MAX;
bool BFS(const vector<int> &v, bool flag) {
  memset(vis, false, sizeof(vis));
  vis[v[0]] = true;
  int cnt = 1;
  queue<int> q;
  q.push(v[0]);
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (int i = 1; i <= n; i++) {
      if (team[i] == flag && MAP[now][i] == true && !vis[i]) {
        vis[i] = true;
        q.push(i);
        cnt++;
      }
    }
  }
  if (v.size() == cnt) {
    return true;
  }
  return false;
}

bool chk() {
  vector<int> a, b;
  for (int i = 1; i <= n; i++) {
    if (team[i]) {
      a.push_back(i);
    } else {
      b.push_back(i);
    }
  }
  if (!BFS(a, true)) {
    return false;
  }
  if (!BFS(b, false)) {
    return false;
  }
  return true;
}

void calc() {
  int a = 0, b = 0;
  for (int i = 1; i <= n; i++) {
    if (team[i] == true) {
      a += people[i];
    } else {
      b += people[i];
    }
  }
  ans = min(ans, abs(a - b));
}
void DFS(int now, int cnt) {
  if (cnt >= 1) {
    if (chk()) {
      calc();
    }
  }
  if (cnt == n - 1) {
    return;
  }
  for (int i = now; i <= n; i++) {
    if (team[i] == false) {
      team[i] = true;
      DFS(i, cnt + 1);
      team[i] = false;
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  people.resize(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> people[i];
  }
  cin.ignore();
  for (int i = 1; i <= n; i++) {
    int m;
    cin >> m;
    for (int j = 0; j < m; j++) {
      int val;
      cin >> val;
      MAP[i][val] = true;
      MAP[val][i] = true;
    }
  }
  DFS(1, 0);
  if (ans == INT_MAX) {
    cout << -1;
  } else {
    cout << ans;
  }
  return 0;
}