#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> house(n);
  vector<int> time(n);
  for (int i = 0; i < n; i++) {
    cin >> house[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> time[i];
  }
  int ans = 2 * house[n - 1];
  int wait = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (2 * house[n - 1] - house[i] > time[i]) {
      continue;
    }
    wait = max(wait, -2 * house[n - 1] + house[i] + time[i]);
  }
  cout << ans + wait;
  return 0;
}