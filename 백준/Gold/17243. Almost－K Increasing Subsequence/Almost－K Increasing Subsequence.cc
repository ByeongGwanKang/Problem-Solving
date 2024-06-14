#include <bits/stdc++.h>
using namespace std;

int n, k;
int arr[501];
int dp[501][501];
int rec(int len, int cnt) {
  int &tmp = dp[len][cnt];
  if (tmp != -1) {
    return tmp;
  }
  tmp = 1;
  for (int i = len + 1; i < n; i++) {
    if (arr[len] <= arr[i]) {
      tmp = max(tmp, rec(i, cnt) + 1);
    }
    if (arr[len] > arr[i] && cnt > 0) {
      tmp = max(tmp, rec(i, cnt - 1) + 1);
    }
  }
  return tmp;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  memset(dp, -1, sizeof(dp));
  cout << rec(0, k);
  return 0;
}