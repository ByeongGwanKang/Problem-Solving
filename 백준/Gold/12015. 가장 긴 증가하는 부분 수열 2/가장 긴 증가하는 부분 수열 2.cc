#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> lis;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    auto idx = lower_bound(lis.begin(), lis.end(), v[i]);
    if (idx == lis.end()) {
      lis.push_back(v[i]);
    } else {
      *idx = v[i];
    }
  }
  cout << lis.size();
  return 0;
}