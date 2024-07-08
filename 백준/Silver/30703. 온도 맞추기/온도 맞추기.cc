#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long n;
  cin >> n;
  vector<long long> v(n);
  vector<long long> ans(n);
  vector<long long> move(n);
  bool odd = false;
  bool even = false;
  long long cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> ans[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> move[i];
    if ((ans[i] - v[i]) % move[i] != 0) {
      cout << -1;
      return 0;
    }
    long long tmp = abs(ans[i] - v[i]) / move[i];
    if (tmp % 2 == 0) {
      even = true;
    }
    if (tmp % 2 == 1) {
      odd = true;
    }
    if (even && odd) {
      cout << -1;
      return 0;
    }
    cnt = max(cnt, tmp);
  }
  cout << cnt;
  return 0;
}