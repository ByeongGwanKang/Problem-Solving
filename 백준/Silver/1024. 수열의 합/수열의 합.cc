#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, l;
  cin >> n >> l;
  int start = -1;
  for (int i = l; i <= 100; i++) {
    int sum = i * (i - 1) / 2;
    if ((n - sum) % i == 0 && (n - sum) / i >= 0) {
      start = (n - sum) / i;
      l = i;
      break;
    }
  }
  if (start == -1) {
    cout << start;
    return 0;
  }
  for (int i = start; i < start + l; i++) {
    cout << i << " ";
  }
  return 0;
}