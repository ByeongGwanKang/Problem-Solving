#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll prime[] = {2, 7, 61};
//고속제곱알고리즘
ll fastpow(ll a, ll b, ll mod) {
  ll res = 1;
  a = a % mod;
  while (b > 0) {
    if (b % 2 == 1) {
      res = (res * a) % mod;
    }
    a = (a * a) % mod;
    b /= 2;
  }
  return res;
}
//밀러라빈알고리즘
bool miller_rabin(ll n, ll p) {
  if (p % n == 0) {
    return true;
  }
  ll k = n - 1;
  while (true) {
    ll temp = fastpow(p, k, n);
    if (temp % n == n - 1) {
      return true;
    }
    if (k % 2 == 1) {
      return (temp == 1 || temp == n - 1);
    }
    k /= 2;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n;
  ll ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll val;
    cin >> val;
    bool flag = true;
    ll check = 2 * val + 1;
    for (auto p : prime) {
      if (!miller_rabin(check, p)) {
        flag = false;
        break;
      }
    }
    if (flag == true) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}