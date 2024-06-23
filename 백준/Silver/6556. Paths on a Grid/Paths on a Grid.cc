#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (true) {
    long long n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) {
      return 0;
    }
    long long res = 1;
    for (int i = 1; i <= min(m, n); i++) {
      res *= (i + max(m, n));
      res /= i;
    }
    cout << res << "\n";
  }
  return 0;
}