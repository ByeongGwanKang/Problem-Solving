#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = 0;
  vector<pair<int, int>> idx;
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    vector<int> v(l + 1);
    v[0] = 0;
    cin >> v[1];
    for (int j = 2; j <= l; j++) {
      cin >> v[j];
      v[j] += v[j - 1];
    }
    int mx = -10005;
    int s = 0, e = 0;
    for (int j = 1; j <= l; j++) {
      for (int k = j; k <= l; k++) {
        if (mx < v[k] - v[j - 1]) {
          mx = v[k] - v[j - 1];
          s = j;
          e = k;
        } else if (mx == v[k] - v[j - 1]) {
          if (k - j < e - s) {
            e = k;
            s = j;
          }
        }
      }
    }
    ans += mx;
    idx.push_back({s, e});
  }
  cout << ans << "\n";
  for (auto a : idx) {
    cout << a.first << " " << a.second << "\n";
  }
  return 0;
}