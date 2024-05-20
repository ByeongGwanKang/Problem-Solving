#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    int base = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    int out = pow(r1 + r2, 2);
    int in = pow(r1 - r2, 2);
    if (base == 0 && in == 0) {
      cout << "-1\n";
    } else if (base > out || base < in) {
      cout << "0\n";
    } else if (base == out || base == in) {
      cout << "1\n";
    } else {
      cout << "2\n";
    }
  }
  return 0;
}