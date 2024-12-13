#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin >> s;
  int sum;
  string ns = s;
  int cnt = 0;
  while (ns.length() > 1) {
    sum = 0;
    cnt++;
    for (int i = 0; i < ns.length(); i++) {
      sum += ns[i] - '0';
    }
    ns = to_string(sum);
  }
  cout << cnt << "\n";
  if (stoi(ns) % 3 == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}