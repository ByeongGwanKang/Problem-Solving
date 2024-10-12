#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int len;
string s;
string ret = "";
ll ans;
bool fail = false;
void isPal(int idx) {
  if (fail) {
    return;
  }
  if (idx == (len + 1) / 2) {
    if (stoll(ret) <= stoll(s)) {
      ans++;
    } else {
      fail = true;
    }
    return;
  }
  if (idx == 0) {
    for (int i = 1; i <= 9; i++) {
      ret[idx] = ret[len - 1 - idx] = i + '0';
      isPal(idx + 1);
      if (fail) {
        return;
      }
    }
  } else {
    for (int i = 0; i <= 9; i++) {
      ret[idx] = ret[len - 1 - idx] = i + '0';
      isPal(idx + 1);
      if (fail) {
        return;
      }
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> s;
  len = s.length();
  ans = 0;
  for (int i = 1; i < len; i++) {
    ll tmp = (i + 1) / 2;
    ll sum = 9;
    for (int j = 1; j < tmp; j++) {
      sum *= 10;
    }
    ans += sum;
  }
  ret.resize(len, '0');
  isPal(0);
  cout << ans;
  return 0;
}