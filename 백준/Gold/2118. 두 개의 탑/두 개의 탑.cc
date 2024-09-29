#include <bits/stdc++.h>
using namespace std;

int arr[50000];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int A = 0, B = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    B += arr[i];
  }
  B -= arr[0];
  A += arr[0];
  int s = 0, e = 1;
  int ans = 0;
  while (s < n) {
    ans = max(ans, min(A, B));
    if (A == B) {
      cout << A;
      return 0;
    }
    if (A > B) {
      A -= arr[s];
      B += arr[s];
      s++;
    } else {
      A += arr[e];
      B -= arr[e];
      e++;
      e %= n;
    }
  }
  cout << ans;
  return 0;
}