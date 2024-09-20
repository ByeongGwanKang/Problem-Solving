#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cache[5001];
ll mod = 1000000007;
ll dp(ll n) {
  if (n % 2 == 1) {
    return 0;
  }
  if (n == 0) {
    return 1;
  }
  ll &ret = cache[n];
  if (ret != 0) {
    return ret;
  }
  for (int i = 2; i <= n; i++) {
    ret += dp(i - 2) * dp(n - i);
    ret %= mod;
  }
  return ret;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    ll l;
    cin >> l;
    cout << dp(l) << "\n";
  }
  return 0;
}