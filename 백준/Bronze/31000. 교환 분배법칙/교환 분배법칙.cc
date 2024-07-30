#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = pow((2 * n + 1), 2);
  for (int a = -n; a <= n; a++) {
    if (a == 0) {
      continue;
    }
    for (int b = -n; b <= n; b++) {
      if (a + b >= 1 - n && a + b <= 1 + n) {
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}