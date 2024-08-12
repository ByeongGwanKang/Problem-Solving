#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int s = 0, e = 0;
  int tmp = k;
  int mx = 0;
  while (e < n && s <= e) {
    if (v[e] % 2 == 0) {
      e++;
    } else {
      if (tmp > 0) {
        tmp--;
        e++;
      } else {
        while (v[s] % 2 == 0) {
          s++;
        }
        s++;
        tmp++;
      }
    }
    mx = max(mx, e - s - k + tmp);
  }
  cout << mx;
  return 0;
}