#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  for (int c = 1; c <= t; c++) {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int s = 0;
    int e = v.size() - 1;
    int cnt = 0;
    while (s <= e) {
      //큰거 담고 넘기기
      if (s == e) {
        cnt++;
        break;
      }
      if (v[s] + v[e] > x) {
        cnt++;
        e--;
      } else {
        cnt++;
        s++;
        e--;
      }
    }
    cout << "Case #" << c << ": " << cnt << "\n";
  }
  return 0;
}