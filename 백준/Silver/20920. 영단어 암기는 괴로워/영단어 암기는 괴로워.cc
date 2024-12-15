#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b) {
  if (a.second == b.second) {
    if (a.first.length() == b.first.length()) {
      return a < b;
    }
    return a.first.length() > b.first.length();
  }
  return a.second > b.second;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  unordered_map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.length() >= m) {
      mp[s]++;
    }
  }
  vector<pair<string, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), cmp);
  for (auto a : v) {
    cout << a.first << "\n";
  }
  return 0;
}