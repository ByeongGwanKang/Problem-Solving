#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n, p;
  cin >> n >> p;
  ll res = 1;
  for (ll i = 1; i <= n; i++) {
    res *= i;
    res %= p;
  }
  cout << res;
  return 0;
}