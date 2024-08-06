#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < m; i++) {
    int q;
    cin >> q;
    int idx = lower_bound(v.begin(), v.end(), q) - v.begin();
    if (idx!=n&&v[idx] == q) {
      cout << idx << "\n";
    } else {
      cout << "-1\n";
    }
  }
  return 0;
}