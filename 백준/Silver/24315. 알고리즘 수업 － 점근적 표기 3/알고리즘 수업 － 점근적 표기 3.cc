#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a1, a0, c1, c2, n;
  cin >> a1 >> a0 >> c1 >> c2 >> n;
  if (c1 * n <= a1 * n + a0 && c1 <= a1 && c2 * n >= a1 * n + a0 && c2 >= a1) {
    cout << 1;
  } else {
    cout << 0;
  }
  return 0;
}