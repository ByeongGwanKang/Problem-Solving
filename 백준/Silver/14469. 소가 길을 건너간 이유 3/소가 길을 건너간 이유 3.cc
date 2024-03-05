#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (ans < v[i].first) {
      ans = v[i].first;
    }
    ans += v[i].second;
  }
  cout << ans;
  return 0;
}