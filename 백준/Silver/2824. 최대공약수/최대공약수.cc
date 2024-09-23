#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<ll> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  int m;
  cin >> m;
  vector<ll> B(m);
  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }
  ll ans = 1;
  bool flag = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ll g = gcd(A[i], B[j]);
      ans *= g;
      A[i] /= g;
      B[j] /= g;
      if (ans >= 1000000000) {
        ans %= 1000000000;
        flag = true;
      }
    }
  }
  if (flag) {
    cout << setw(9) << setfill('0') << ans;
  } else {
    cout << ans;
  }
  return 0;
}