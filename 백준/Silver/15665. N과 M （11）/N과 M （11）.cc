#include <bits/stdc++.h>
using namespace std;

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
  for (int i = 0; i < v.size(); i++) {
    q[cnt] = v[i];
    recursive(cnt + 1);
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
  v.erase(unique(v.begin(), v.end()), v.end());
  recursive(0);
  return 0;
}
