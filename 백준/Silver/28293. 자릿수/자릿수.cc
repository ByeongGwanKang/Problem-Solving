#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b;
  cin >> a >> b;
  long double res = log10(a) * b;
  cout << (long long)(floor(res) + 1);
  return 0;
}