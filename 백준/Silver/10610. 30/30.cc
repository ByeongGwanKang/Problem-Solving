#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin >> s;
  int sum = 0;
  bool zero = false;
  for (int i = 0; i < s.length(); i++) {
    sum += s[i] - '0';
    if (s[i] == '0') {
      zero = true;
    }
  }
  if (sum % 3 != 0 || zero == false) {
    cout << -1;
  } else {
    sort(s.begin(), s.end(), greater<int>());
    cout << s;
  }
  return 0;
}