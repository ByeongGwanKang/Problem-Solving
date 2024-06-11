#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  vector<int> sum(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i < n; i++) {
    sum[i] = sum[i - 1] + v[i];
  }
  int ans = sum[k - 1];
  for (int i = k; i < n; i++) {
    ans = max(ans, sum[i] - sum[i - k]);
  }
  cout << ans;
  return 0;
}