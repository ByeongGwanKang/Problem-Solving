#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> can(n);
  vector<int> need(m);
  for (int i = 0; i < n; i++) {
    cin >> can[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> need[i];
  }
  sort(can.rbegin(), can.rend());
  sort(need.rbegin(), need.rend());
  int worst = m;
  int now = 0;
  bool flag = true;
  for (int i = 0; i < m; i++) {
    for (int j = now; j < now + need[i]; j++) {
      if (can[j] < worst) {
        flag = false;
        break;
      }
    }
    worst--;
    now += need[i];
    if (!flag) {
      break;
    }
  }
  cout << (flag ? "YES" : "NO");
  return 0;
}