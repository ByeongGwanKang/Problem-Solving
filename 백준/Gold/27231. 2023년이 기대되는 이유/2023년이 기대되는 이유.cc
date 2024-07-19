#include <bits/stdc++.h>
using namespace std;

set<long long> sum(string str) {
  set<long long> s;
  s.insert(stoi(str));
  for (int i = 1; i < str.length(); i++) {
    set<long long> tmp = sum(str.substr(i));
    for (auto a : tmp) {
      s.insert(stoi(str.substr(0, i)) + a);
    }
  }
  return s;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] - '0' >= 2) {
        flag = false;
      }
    }
    if (flag) {
      cout << "Hello, BOJ 2023!\n";
      continue;
    }
    set<long long> able = sum(s);
    int cnt = 1;
    for (int i = 2; i < 10; i++) {
      long long val = 0;
      for (int j = 0; j < s.length(); j++) {
        val += pow(s[j] - '0', i);
      }
      if (able.count(val) != 0) {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}