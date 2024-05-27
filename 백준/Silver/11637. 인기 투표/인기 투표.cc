#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      cin >> v[i].first;
      v[i].second = i;
      sum += v[i].first;
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    if (v[0].first == v[1].first) {
      cout << "no winner\n";
    } else if (v[0].first > sum / 2) {
      cout << "majority winner " << v[0].second << "\n";
    } else {
      cout << "minority winner " << v[0].second << "\n";
    }
  }
  return 0;
}