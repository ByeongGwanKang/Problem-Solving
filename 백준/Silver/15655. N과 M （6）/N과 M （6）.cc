#include <bits/stdc++.h>
using namespace std;

// nm6
int n, m;
bool vis[10001];
vector<int> v;
void recursive(int cnt, int idx) {
  if (cnt == m) {
    for (int i = 0; i < n; i++) {
      if (vis[v[i]]) {
        cout << v[i] << " ";
      }
    }
    cout << "\n";
    return;
  }
  for (int i = idx; i < n; i++) {
    if (!vis[v[i]]) {
      vis[v[i]] = true;
      recursive(cnt + 1, i);
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
  recursive(0, 0);
  return 0;
}
