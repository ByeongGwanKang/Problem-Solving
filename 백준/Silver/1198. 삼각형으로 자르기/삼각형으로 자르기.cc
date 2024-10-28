#include <bits/stdc++.h>
using namespace std;

double calc(double x1, double x2, double x3, double y1, double y2, double y3) {
  return 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x1 * y3 - x3 * y2);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<pair<double, double>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  double ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        ans = max(ans, calc(v[i].first, v[j].first, v[k].first, v[i].second,
                            v[j].second, v[k].second));
      }
    }
  }
  cout << fixed;
  cout << ans;
  return 0;
}