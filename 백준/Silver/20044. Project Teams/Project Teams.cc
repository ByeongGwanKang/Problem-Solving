#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(2 * n);
  for (int i = 0; i < 2 * n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int ans = 10000000;
  for (int i = 0; i < n; i++) {
    int temp = v[i] + v[2 * n - 1 - i];
    ans = min(ans, temp);
  }
  cout << ans;
  return 0;
}