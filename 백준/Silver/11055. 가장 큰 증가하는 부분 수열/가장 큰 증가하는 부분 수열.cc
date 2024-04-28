#include <bits/stdc++.h>
using namespace std;

int dp[1001];
int arr[1001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    dp[i] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[i] > arr[j]) {
        dp[i] = max(dp[i], dp[j] + arr[i]);
      }
    }
  }
  cout << *max_element(dp, dp + n);
  return 0;
}
