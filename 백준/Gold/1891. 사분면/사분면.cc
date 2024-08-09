#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
pair<ll, ll> rec(int idx, ll r, ll c, ll size) {
  if (size == 1) {
    return {r, c};
  }
  if (s[idx] == '1') {
    return rec(idx + 1, r, c + size / 2, size / 2);
  }
  if (s[idx] == '2') {
    return rec(idx + 1, r, c, size / 2);
  }
  if (s[idx] == '3') {
    return rec(idx + 1, r + size / 2, c, size / 2);
  }
  if (s[idx] == '4') {
    return rec(idx + 1, r + size / 2, c + size / 2, size / 2);
  }
  return {-1, -1};
}

string original(ll r, ll c, ll x, ll y, ll size) {
  if (size == 1) {
    return "";
  }
  if (x < r + size / 2 && y >= c + size / 2) {
    return "1" + original(r, c + size / 2, x, y, size / 2);
  } else if (x < r + size / 2 && y < c + size / 2) {
    return "2" + original(r, c, x, y, size / 2);
  } else if (x >= r + size / 2 && y < c + size / 2) {
    return "3" + original(r + size / 2, c, x, y, size / 2);
  } else {
    return "4" + original(r + size / 2, c + size / 2, x, y, size / 2);
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int d;
  cin >> d >> s;
  ll x_move, y_move;
  cin >> x_move >> y_move;
  ll size = (1ll << d);
  pair<ll, ll> now = rec(0, 0, 0, size);
  now.first -= y_move;
  now.second += x_move;
  if (now.first >= 0 && now.first < size && now.second >= 0 &&
      now.second < size) {
    cout << original(0, 0, now.first, now.second, size);
  } else {
    cout << -1;
  }
  return 0;
}