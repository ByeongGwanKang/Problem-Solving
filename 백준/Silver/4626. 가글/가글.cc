#include <bits/stdc++.h>
using namespace std;

string to_base_7(long long numerator, long long denominator) {
  string result;
  for (int i = 0; i < 250; ++i) {
    numerator *= 7;
    long long digit = numerator / denominator;
    result += to_string(digit);
    numerator %= denominator;
    if (numerator == 0)
      break;
  }
  return result;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  for (int k = 1; k <= t; k++) {
    int n, d, b, e;
    cin >> n >> d >> b >> e;
    string s = to_base_7(n % d, d);
    string res;
    for (int i = b; i <= e; i++) {
      if (i < s.length()) {
        res += s[i];
      } else {
        res += '0';
      }
    }
    cout << "Problem set " << k << ": " << n << " / " << d << ", base 7 digits "
         << b << " through " << e << ": " << res << "\n";
  }
  return 0;
}