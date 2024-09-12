#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> p;
  vector<int> m;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    if (val > 0) {
      p.push_back(val);
    } else {
      m.push_back(abs(val));
    }
  }
  vector<int> ans;
  sort(p.begin(), p.end());
  sort(m.begin(), m.end());
  for (int i = 0; i <= n; i++) {
    int pos = int(p.size() - (upper_bound(p.begin(), p.end(), i) - p.begin()));
    int neg = int(lower_bound(m.begin(), m.end(), i) - m.begin());
    if (pos + neg == i) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << "\n";
  for (auto a : ans) {
    cout << a << " ";
  }
  return 0;
}