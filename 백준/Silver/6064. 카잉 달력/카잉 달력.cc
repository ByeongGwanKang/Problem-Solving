#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int m, n, x, y;
    cin >> m >> n >> x >> y;
    int fin = lcm(m, n);
    int ans = -1;
    for (int i = x; i <= fin; i += m) {
      int tmp = i % n;
      if (tmp == 0) {
        tmp = n;
      }
      if (tmp == y) {
        ans = i;
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
