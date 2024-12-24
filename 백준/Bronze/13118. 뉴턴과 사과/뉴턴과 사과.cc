#include <bits/stdc++.h>
using namespace std;

int p[4];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 0; i < 4; i++) {
    cin >> p[i];
  }
  int x, y, r;
  cin >> x >> y >> r;
  for (int i = 0; i < 4; i++) {
    if (p[i] == x) {
      cout << i + 1;
      return 0;
    }
  }
  cout << 0;
  return 0;
}