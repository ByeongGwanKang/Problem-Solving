#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long n;
  cin >> n;
  while (n--) {
    long long a, b;
    cin >> a >> b;
    cout << (a * b) / gcd(a, b) << "\n";
  }
  return 0;
}