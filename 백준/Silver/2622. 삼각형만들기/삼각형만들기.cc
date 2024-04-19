#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    for (int j = i; j < n; j++) {
      int k = n - i - j;
      if (j > k) {
        break;
      }
      if (i + j > k) {
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}
