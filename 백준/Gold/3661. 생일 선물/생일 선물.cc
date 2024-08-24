#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first == b.first) {
    return a.second < b.second; //오름차순
  } else
    return a.first > b.first; //내림차순
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int p, n;
    cin >> p >> n;
    vector<pair<int, int>> v(n); //가진 돈, 인덱스
    vector<int> ans(n);          //인덱스 별 낸 돈
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> v[i].first;
      sum += v[i].first;
      v[i].second = i;
    }
    if (sum < p) {
      cout << "IMPOSSIBLE\n";
      continue;
    }
    if (sum == p) {
      for (auto a : v) {
        cout << a.first << " ";
      }
      cout << "\n";
      continue;
    }
    sort(v.begin(), v.end(), cmp);
    int tmpsum = 0;
    int idx = 0;
    while (tmpsum != p) {
      if (idx == v.size()) {
        idx = 0;
      }
      auto &now = v[idx];
      if (now.first == 0) {
        idx = 0;
        continue;
      }
      now.first--;
      ans[now.second]++;
      tmpsum++;
      idx++;
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}