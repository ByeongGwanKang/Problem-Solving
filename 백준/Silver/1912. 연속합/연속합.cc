#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int dp[100001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  dp[0] = arr[0];
  int ans = dp[0];
  for (int i = 1; i < n; i++) {
    dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    ans = max(dp[i], ans);
  }
  cout << ans;
  return 0;
}
