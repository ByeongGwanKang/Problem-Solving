#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  string s;
  cin >> n >> s >> k;
  bool flag = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      flag = true;
    }
  }
  if (flag == false) {
    cout << "YES";
    return 0;
  }
  reverse(s.begin(), s.end());
  for (int i = 0; i < k; i++) {
    if (s[i] == '1') {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}