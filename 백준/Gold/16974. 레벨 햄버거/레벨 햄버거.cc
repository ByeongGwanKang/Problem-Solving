#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, x;
vector<ll> p(51);
vector<ll> b(51);
vector<ll> burger(51);
ll eat(ll lv, ll remain) {
  if (lv == 0) {
    return 1;
  }
  //빵
  if (remain == 1) {
    return 0;
  }
  //빵+버거
  if (remain == burger[lv - 1] + 1) {
    return p[lv - 1];
  }
  //빵+버거+패티
  if (remain == burger[lv - 1] + 2) {
    return p[lv - 1] + 1;
  }
  //빵+버/거
  if (remain < burger[lv - 1] + 1) {
    return eat(lv - 1, remain - 1);
  }
  //빵+버거+패티+버/거
  if (remain <= burger[lv - 1] * 2 + 2) {
    return p[lv - 1] + 1 + eat(lv - 1, remain - burger[lv - 1] - 2);
  }
  //빵+버거+패티+버거+빵
  return p[lv - 1] * 2 + 1;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> x;
  p[0] = 1;
  b[0] = 0;
  burger[0] = p[0] + b[0];
  for (int i = 1; i <= n; i++) {
    p[i] = p[i - 1] * 2 + 1;
    b[i] = b[i - 1] * 2 + 2;
    burger[i] = p[i] + b[i];
  }
  cout << eat(n, x);
  return 0;
}