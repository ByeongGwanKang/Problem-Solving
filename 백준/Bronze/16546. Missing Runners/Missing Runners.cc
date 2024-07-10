#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n + 1, 0);
  for (int i = 0; i < n - 1; i++) {
    int val;
    cin >> val;
    v[val]++;
  }
  for (int i = 1; i <= n; i++) {
    if (v[i] == 0) {
      cout << i;
      return 0;
    }
  }
  return 0;
}