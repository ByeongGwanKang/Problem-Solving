#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    ll s, e;
    cin >> s >> e;
    ll mx = floor(sqrt(e - s));
    ll tmp = e - s - mx * mx;
    cout << 2 * mx - 1 + ceil((double)tmp / mx) << "\n";
  }
  return 0;
}