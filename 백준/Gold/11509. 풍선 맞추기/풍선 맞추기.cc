#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int mx = 0;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    arr[val]++;
    if (arr[val + 1] != 0) {
      arr[val + 1]--;
    }
    mx = max(mx, val);
  }
  int ans = 0;
  for (int i = 0; i <= mx; i++) {
    ans += arr[i];
  }
  cout << ans;
  return 0;
}