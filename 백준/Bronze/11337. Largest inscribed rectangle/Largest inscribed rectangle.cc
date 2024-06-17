#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  cout << fixed;
  cout.precision(3);
  while (t--) {
    double r, b;
    cin >> r >> b;
    if (b > sqrt(2) * r) {
      cout << 2 * r * r << "\n";
    } else {
      cout << sqrt(4 * r * r - b * b) * b << "\n";
    }
  }
  return 0;
}