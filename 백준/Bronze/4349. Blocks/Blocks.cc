#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    vector<tuple<int, int, int>> v;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        int k = n / (i * j);
        if (n == k * i * j) {
          v.push_back(make_tuple(i, j, k));
        }
      }
    }
    int ans = 123456789;
    for (auto a : v) {
      ans = min(ans, 2 * get<0>(a) * get<1>(a) + 2 * get<0>(a) * get<2>(a) +
                         2 * get<2>(a) * get<1>(a));
    }
    cout << ans << "\n";
  }
  return 0;
}