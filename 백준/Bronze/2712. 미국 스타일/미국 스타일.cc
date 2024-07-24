#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  cout.precision(4);
  cout << fixed;
  while (t--) {
    double val;
    string s;
    cin >> val >> s;
    if (s == "kg") {
      cout << val * 2.2046 << " lb\n";
    }
    if (s == "lb") {
      cout << val * 0.4536 << " kg\n";
    }
    if (s == "l") {
      cout << val * 0.2642 << " g\n";
    }
    if (s == "g") {
      cout << val * 3.7854 << " l\n";
    }
  }
  return 0;
}