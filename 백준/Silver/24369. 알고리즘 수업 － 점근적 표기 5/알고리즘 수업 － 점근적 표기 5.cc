#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  double a2, a1, a0;
  cin >> a2 >> a1 >> a0;
  double c, n0;
  cin >> c >> n0;
  double tmp = a2 - c;
  if (tmp < 0) {
    cout << 0;
    return 0;
  }
  double x = -a1 / (2. * tmp);
  double y = -(a1 * a1 - 4. * tmp * a0) / (4. * tmp);
  bool flag = true;
  for (int i = n0; i <= 100; i++) {
    if (n0 <= x) {
      if (y < 0) {
        flag = false;
      }
    } else {
      double f = (tmp)*i * i + a1 * i + a0;
      if (f < 0) {
        flag = false;
        break;
      }
    }
  }
  if (flag) {
    cout << 1;
  } else {
    cout << 0;
  }
  return 0;
}