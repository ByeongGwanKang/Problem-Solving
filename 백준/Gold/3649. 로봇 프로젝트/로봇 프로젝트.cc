#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int x;
  while (cin >> x) {
    x *= 10000000;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int lo = 0, hi = n - 1;
    bool flag = false;
    while (lo < hi) {
      if (v[lo] + v[hi] > x) {
        hi--;
      } else if (v[lo] + v[hi] < x) {
        lo++;
      } else {
        flag = true;
        cout << "yes " << v[lo] << " " << v[hi] << "\n";
        break;
      }
    }
    if (!flag) {
      cout << "danger\n";
    }
  }
  return 0;
}