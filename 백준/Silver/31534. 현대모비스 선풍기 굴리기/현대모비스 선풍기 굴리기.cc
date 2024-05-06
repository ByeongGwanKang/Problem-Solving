#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout << fixed;
  cout.precision(6);
  double PI = 3.141592653589793238462643;
  double a, b, h;
  cin >> a >> b >> h;
  if (a == b) {
    cout << -1;
  } else {
    double s = sqrt(pow(abs(a - b), 2) + pow(h, 2));
    cout << (a + b) * s * PI * s / abs(b - a);
  }
  return 0;
}