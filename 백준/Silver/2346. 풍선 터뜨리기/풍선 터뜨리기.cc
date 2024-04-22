#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int idx = 0;
  int cnt = 1;
  while (cnt != n) {
    cnt++;
    cout << idx + 1 << " ";
    int now = v[idx];
    v[idx] = 0;
    while (now > 0) {
      idx++;
      now--;
      if (idx == n) {
        idx = 0;
      }
      if (v[idx] == 0) {
        now++;
      }
    }
    while (now < 0) {
      idx--;
      now++;
      if (idx == -1) {
        idx = n - 1;
      }
      if (v[idx] == 0) {
        now--;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (v[i]) {
      cout << i + 1;
    }
  }
  return 0;
}
