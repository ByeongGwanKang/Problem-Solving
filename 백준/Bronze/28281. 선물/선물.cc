#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int mn = 2000000;
  for (int i = 1; i < n; i++) {
    mn = min(v[i] + v[i - 1], mn);
  }
  cout << mn * x;
  return 0;
}