#include <bits/stdc++.h>
using namespace std;

int s[1'000'001];
int e[1'000'001];
int res[1'000'005];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    s[l]++;
    e[r]++;
  }
  for (int i = 1; i <= 1'000'000; i++) {
    res[i] = res[i - 1] + s[i];
    res[i] = res[i] - e[i - 1];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    cout << res[t] << "\n";
  }
  return 0;
}