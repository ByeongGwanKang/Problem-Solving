#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int r, s;
  cin >> r >> s;
  int sum = r * 8 + s * 3;
  cout << sum - 28;
  return 0;
}