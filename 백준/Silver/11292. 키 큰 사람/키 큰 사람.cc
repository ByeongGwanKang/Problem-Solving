#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (true) {
    int n;
    cin >> n;
    vector<pair<double, int>> v;
    vector<string> s;
    if (n == 0) {
      return 0;
    }
    for (int i = 0; i < n; i++) {
      string name;
      double h;
      cin >> name >> h;
      s.push_back(name);
      v.push_back({-h, i});
    }
    sort(v.begin(), v.end());
    double best = v[0].first;
    for (int i = 0; i < n; i++) {
      if (v[i].first == best) {
        cout << s[v[i].second] << " ";
      } else {
        break;
      }
    }
    cout << "\n";
  }
  return 0;
}