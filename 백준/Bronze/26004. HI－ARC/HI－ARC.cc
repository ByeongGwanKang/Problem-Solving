#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  string s;
  cin >> n >> s;
  vector<int> v(5, 0);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'H') {
      v[0]++;
    }
    if (s[i] == 'I') {
      v[1]++;
    }
    if (s[i] == 'A') {
      v[2]++;
    }
    if (s[i] == 'R') {
      v[3]++;
    }
    if (s[i] == 'C') {
      v[4]++;
    }
  }
  int ans = 123456789;
  for (int i = 0; i < 5; i++) {
    ans = min(ans, v[i]);
  }
  cout << ans;
  return 0;
}