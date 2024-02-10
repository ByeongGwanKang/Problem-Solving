#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long n;
  cin >> n;
  long long ans = n;
  for (long long i = 2; i <=sqrt(n); i++) {
    if (n % i == 0) {
      ans -= ans / i;
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if(n>1) {
    ans -= ans/n;
  }
  cout << ans;
  return 0;
}