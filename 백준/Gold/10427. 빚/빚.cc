#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int v[4001];
ll sum[4001];
ll f(int k) {
  ll ret = 1e9;
  for (int i = k; i <= n; i++) {
    ret = min(ret, v[i] * k - sum[i] + sum[i - k]);
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
    cin >> n;
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
    }
    sort(v, v + n + 1);
    for (int i = 1; i <= n; i++) {
      sum[i] = sum[i - 1] + v[i];
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
      ans += f(i);
    }
    cout << ans << "\n";
  }
  return 0;
}