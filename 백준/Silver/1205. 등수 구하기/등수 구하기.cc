#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, my, p;
  cin >> n >> my >> p;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), greater<int>());
  int rank = 1;
  for (int i = 0; i < n; i++) {
    if (v[i] <= my) {
      break;
    }
    rank++;
  }
  if (n == 0) {
    cout << 1;
    return 0;
  }
  if (my == v[n - 1] && n == p) {
    cout << -1;
  } else {
    cout << (rank <= p ? rank : -1);
  }
  return 0;
}