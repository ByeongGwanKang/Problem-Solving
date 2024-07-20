#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> a(n + 1);
  a[1] = 2;
  for (int i = 2; i <= n; i++) {
    a[i] = 3 * a[i - 1];
  }
  cout << a[n];
  return 0;
}