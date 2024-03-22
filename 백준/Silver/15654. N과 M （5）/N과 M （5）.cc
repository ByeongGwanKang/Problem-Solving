#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[10001];
int q[9];
vector<int> v;
void recursive(int cnt) {
  if (cnt == m) {
    for (int i = 0; i < m; i++) {
      cout << q[i] << " ";
    }
    cout << "\n";
    return;
  }
  for (int i = 0; i < n; i++) {
    if (!vis[v[i]]) {
      vis[v[i]] = true;
      q[cnt] = v[i];
      recursive(cnt + 1);
      vis[v[i]] = false;
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    v.push_back(val);
  }
  sort(v.begin(), v.end());
  recursive(0);
  return 0;
}
