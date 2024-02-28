#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    int temp;
    cin >> a >> b >> c;
    if (a == b && b == c) {
      temp = 10000 + a * 1000;
    } else if (a != b && b != c && a != c) {
      temp = max({a, b, c}) * 100;
    } else {
      if (a == b) {
        temp = 1000 + a * 100;
      }
      if (b == c) {
        temp = 1000 + b * 100;
      }
      if (a == c) {
        temp = 1000 + a * 100;
      }
    }
    ans = max(ans, temp);
  }
  cout << ans;
  return 0;
}