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
  sort(v.begin(), v.end());
  int ans = 0;
  int low = 0, high = n - 1;
  while (low < high) {
    if (v[low] + v[high] <= k) {
      ans++;
      low++;
      high--;
    } else {
      high--;
    }
  }
  cout << ans;
  return 0;
}