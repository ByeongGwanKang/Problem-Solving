#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  while (cin >> n) {
    long long cnt = 1;
    long long ans = 1;
    while (cnt % n != 0) {
      cnt *= 10;
      cnt++;
      cnt %= n;
      ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}