#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  int ans = n;
  for (int i = 1; i < n; i++) {
    if (s[i].find(s[i - 1]) == 0) {
      ans--;
    }
  }
  cout << ans;
  return 0;
}