#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  while (cin >> n) {
    int res = 1;
    int two = 0;
    int five = 0;
    for (int i = 2; i <= n; i++) {
      int tmp = i;
      while (tmp % 2 == 0) {
        tmp /= 2;
        two++;
      }
      while (tmp % 5 == 0) {
        tmp /= 5;
        five++;
      }
      res *= tmp;
      res %= 10;
    }
    for (int i = 0; i < two - five; i++) {
      res *= 2;
      res %= 10;
    }
    cout << setw(5);
    cout << n << " -> " << res << "\n";
  }
  return 0;
}