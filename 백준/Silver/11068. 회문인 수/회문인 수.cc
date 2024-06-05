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
    bool flag;
    for (int i = 2; i <= 64; i++) {
      int tmp = n;
      vector<int> v;
      while (tmp) {
        v.push_back(tmp % i);
        tmp /= i;
      }
      int s = v.size();
      flag = true;
      for (int j = 0; j < s / 2; j++) {
        if (v[j] != v[s - 1 - j]) {
          flag = false;
        }
      }
      if (flag) {
        cout << 1 << "\n";
        break;
      }
    }
    if (!flag) {
      cout << "0\n";
    }
  }
  return 0;
}