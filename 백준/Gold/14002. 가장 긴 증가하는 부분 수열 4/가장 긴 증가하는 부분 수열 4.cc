#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  vector<pair<int, int>> len(n, {1, -1});
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[j] > v[i] && len[j].first < len[i].first + 1) {
        len[j].first = len[i].first + 1;
        len[j].second = i;
      }
    }
  }
  int ans = 0;
  int idx;
  for (int i = 0; i < n; i++) {
    if (ans < len[i].first) {
      ans = len[i].first;
      idx = i;
    }
  }
  cout << ans << "\n";
  vector<int> restore;
  while (true) {
    restore.push_back(v[idx]);
    if (len[idx].second == -1) {
      break;
    }
    idx = len[idx].second;
  }
  reverse(restore.begin(), restore.end());
  for (auto a : restore) {
    cout << a << " ";
  }
  return 0;
}