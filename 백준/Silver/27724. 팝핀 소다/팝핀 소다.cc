#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, k;
  cin >> n >> m >> k;
  int round = 0;
  while (n != 1) {
    n /= 2;
    round++;
  }
  int ans = 0;
  while (k != 1) {
    k /= 2;
    ans++;
  }
  cout << min(ans + m, round);
  return 0;
}