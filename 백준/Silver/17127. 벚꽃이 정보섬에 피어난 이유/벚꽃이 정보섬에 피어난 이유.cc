#include <bits/stdc++.h>
using namespace std;

int arr[11];
int calc(int s, int e) {
  int sum = 1;
  for (int i = s; i <= e; i++) {
    sum *= arr[i];
  }
  return sum;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  int ans = 0;
  int tmp = 0;
  for (int i = 1; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        tmp = calc(1, i) + calc(i + 1, j) + calc(j + 1, k) + calc(k + 1, n);
        ans = max(ans, tmp);
      }
    }
  }
  cout << ans;
  return 0;
}