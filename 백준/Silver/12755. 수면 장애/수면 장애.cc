#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = 1;
  while (true) {
    string tmp = to_string(ans);
    if (n > tmp.length()) {
      n -= tmp.length();
      ans++;
    } else {
      cout << tmp[n - 1];
      return 0;
    }
  }
  return 0;
}