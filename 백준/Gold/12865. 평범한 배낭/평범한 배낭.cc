#include <bits/stdc++.h>
using namespace std;

int arr[101][100001];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    int w, v;
    cin >> w >> v;
    for (int j = 1; j <= k; j++) {
      if (j < w) {
        arr[i][j] = arr[i - 1][j];
      } else {
        arr[i][j] = max(arr[i - 1][j], v + arr[i - 1][j - w]);
      }
    }
  }
  cout << arr[n][k];
  return 0;
}