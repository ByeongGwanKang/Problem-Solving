#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin >> s;
  int y1, m1, d1;
  y1 = stoi(s.substr(0, 4));
  m1 = stoi(s.substr(5, 2));
  d1 = stoi(s.substr(8, 2));
  int n;
  cin >> n;
  int cnt = n;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    int y2, m2, d2;
    y2 = stoi(tmp.substr(0, 4));
    m2 = stoi(tmp.substr(5, 2));
    d2 = stoi(tmp.substr(8, 2));

    if (y1 > y2) {
      cnt--;
    } else if (y1 == y2 && m1 > m2) {
      cnt--;
    } else if (y1 == y2 && m1 == m2 && d1 > d2) {
      cnt--;
    }
  }
  cout << cnt;
  return 0;
}