#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    v.push_back({val, i});
  }
  sort(v.begin(), v.end());
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    p[v[i].second] = i;
  }
  for (auto a : p) {
    cout << a << " ";
  }
  return 0;
}