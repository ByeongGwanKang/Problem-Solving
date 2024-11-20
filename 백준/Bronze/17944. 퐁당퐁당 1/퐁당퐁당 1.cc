#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, t;
  cin >> n >> t;
  int now = 0;
  bool bigger = true;
  for (int i = 1; i <= t; i++) {
    if (bigger) {
      now++;
    } else {
      now--;
    }
    if (now == 2 * n) {
      bigger = false;
    } else if (now == 1) {
      bigger = true;
    }
  }
  cout << now;
  return 0;
}