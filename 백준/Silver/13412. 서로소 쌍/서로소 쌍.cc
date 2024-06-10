#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        int a = i;
        int b = n / i;
        if (a > b) {
          break;
        }
        if (gcd(a, b) == 1) {
          ans++;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}