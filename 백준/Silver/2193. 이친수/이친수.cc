#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<long long> v(n + 1);
  v[0] = 0;
  v[1] = 1;
  for (int i = 2; i <= n; i++) {
    v[i] = v[i - 2] + v[i - 1];
  }
  cout << v[n];
  return 0;
}