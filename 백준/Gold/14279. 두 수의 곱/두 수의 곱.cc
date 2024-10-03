#include <bits/stdc++.h>
using namespace std;

const int mx = 4000001;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 123456789;
  for (int A = 1; A < mx; A++) {
    for (int B = 1; A * B < mx; B++) {
      int C = A * B;
      ans = min(ans, abs(A - a) + abs(B - b) + abs(C - c));
    }
  }
  cout << ans;
  return 0;
}