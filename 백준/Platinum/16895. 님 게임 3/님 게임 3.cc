#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    res ^= v[i];
  }
  if (res == 0) {
    cout << 0;
    return 0;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int now = res ^ v[i];
    if (now <= v[i]) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}