#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int arr[1001][3] = {
      0,
  };
  int ans[1001][3] = {
      0,
  };
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  ans[0][0] = arr[0][0];
  ans[0][1] = arr[0][1];
  ans[0][2] = arr[0][2];
  for (int i = 1; i < n; i++) {
    ans[i][0] = min(ans[i - 1][1], ans[i - 1][2]) + arr[i][0];
    ans[i][1] = min(ans[i - 1][0], ans[i - 1][2]) + arr[i][1];
    ans[i][2] = min(ans[i - 1][1], ans[i - 1][0]) + arr[i][2];
  }
  cout << min({ans[n - 1][0], ans[n - 1][1], ans[n - 1][2]});
  return 0;
}
