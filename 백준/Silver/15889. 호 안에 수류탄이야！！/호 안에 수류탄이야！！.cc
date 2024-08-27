#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> location(n);
  vector<int> range(n);
  vector<int> sum(n);
  for (int i = 0; i < n; i++) {
    cin >> location[i];
  }
  for (int i = 0; i < n - 1; i++) {
    cin >> range[i];
    sum[i] = location[i] + range[i];
  }
  int able = range[0];
  int idx = 0;
  while (true) {
    idx++;
    if (location[idx] <= able) {
      able = max(able, sum[idx]);
      if (able >= location[n - 1]) {
        cout << "권병장님, 중대장님이 찾으십니다";
        return 0;
      }
      continue;
    }
    cout << "엄마 나 전역 늦어질 것 같아";
    return 0;
  }
  return 0;
}