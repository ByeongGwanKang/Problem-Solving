#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    res ^= v[i];
  }
  if (res) {
    cout << "koosaga";
  } else {
    cout << "cubelover";
  }
  return 0;
}