#include <bits/stdc++.h>
using namespace std;

// nm9
int n, m;
int q[9];
vector<int> v;
bool vis[9];
void recursive(int cnt) {
  if (cnt == m) {
    for (int i = 0; i < m; i++) {
      cout << q[i] << " ";
    }
    cout << "\n";
    return;
  }
  int prev = 0;
  for (int i = 0; i < n; i++) {
    if (!vis[i] && prev != v[i]) {
      vis[i] = true;
      q[cnt] = v[i];
      prev = q[cnt];
      recursive(cnt + 1);
      vis[i] = false;
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
