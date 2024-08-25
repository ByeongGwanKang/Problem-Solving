#include <bits/stdc++.h>
using namespace std;

int ans[100001];
int cnt_one(int n) {
  int ret;
  for (ret = 0; n != 0; ret++) {
    n &= n - 1;
  }
  return ret;
}
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
  ans[0] = 0;
  ans[1] = cnt_one(v[0] ^ v[1]);
  if (n >= 2) {
    ans[2] = cnt_one(v[0] ^ v[1] ^ v[2]);
    if (n >= 3)
      ans[3] = ans[1] + cnt_one(v[2] ^ v[3]);
  }
  for (int i = 4; i < n; i++) {
    ans[i] = max(ans[i - 2] + cnt_one(v[i] ^ v[i - 1]),
                 ans[i - 3] + cnt_one(v[i] ^ v[i - 1] ^ v[i - 2]));
  }
  cout << ans[n - 1];
  return 0;
}