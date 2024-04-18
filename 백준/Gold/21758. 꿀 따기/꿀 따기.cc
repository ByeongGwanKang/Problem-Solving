#include <bits/stdc++.h>
using namespace std;

// 21758 꿀따기
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n + 1, 0);
  vector<int> sum(n + 1.0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    sum[i] = sum[i - 1] + v[i];
  }
  int ans = 0;
  //벌벌통
  for (int i = 2; i < n; i++) {
    int temp = (sum[n] - sum[1] - v[i]) + (sum[n] - sum[i]);
    ans = max(ans, temp);
  }
  //벌통벌
  for (int i = 2; i < n; i++) {
    int temp = sum[i] - v[1] + sum[n - 1] - sum[i - 1];
    ans = max(ans, temp);
  }
  //통벌벌
  for (int i = 2; i < n; i++) {
    int temp = (sum[n - 1] - v[i]) + sum[i - 1];
    ans = max(ans, temp);
  }
  cout << ans;
  return 0;
}
