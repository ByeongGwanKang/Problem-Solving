#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  for (int c = 1; c <= t; c++) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    while (n != 2) {
      for (int i = 0; i < ceil(n / double(2)); i++) {
        v[i] += v[n - i - 1];
      }
      n = ceil(n / double(2));
    }
    if (v[0] > v[1]) {
      cout << "Case #" << c << ": Alice\n";
    } else {
      cout << "Case #" << c << ": Bob\n";
    }
  }
  return 0;
}