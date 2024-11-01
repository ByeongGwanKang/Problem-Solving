#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll diag = 1;
ll x = 1;
ll y = 1;
ll n, k;
ll calc() {
  if (diag % 2 == 0) {
    if (diag <= n) {
      return diag * (diag - 1) / 2 + x;
    } else {
      return diag * (diag - 1) / 2 + x - (diag - n) * (diag - n);
    }
  } else {
    if (diag <= n) {
      return diag * (diag + 1) / 2 - (x - 1);
    } else {
      return diag * (diag + 1) / 2 - (x - 1) - (diag - n) * (diag - n);
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> k;
  ll ans = 1;
  for (int i = 0; i < k; i++) {
    char c;
    cin >> c;
    if (c == 'U') {
      x--;
      diag--;
      ans += calc();
    }
    if (c == 'D') {
      x++;
      diag++;
      ans += calc();
    }
    if (c == 'L') {
      y--;
      diag--;
      ans += calc();
    }
    if (c == 'R') {
      y++;
      diag++;
      ans += calc();
    }
  }
  cout << ans;
  return 0;
}