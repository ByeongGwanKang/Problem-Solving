#include <bits/stdc++.h>
using namespace std;

int n, m;
int vis[10001];
vector<int> v;
void recursive(int cnt, int idx) {
  if (cnt == m) {
    for (int i = 0; i < v.size(); i++) {
      for (int j = vis[v[i]]; j > 0; j--) {
        cout << v[i] << " ";
      }
    }
    cout << "\n";
    return;
  }
  for (int i = idx; i < v.size(); i++) {
    vis[v[i]]++;
    recursive(cnt + 1, i);
    vis[v[i]]--;
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
  recursive(0, 0);
  return 0;
}
