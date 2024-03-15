#include <bits/stdc++.h>
using namespace std;

int broken[10] = {
    0,
};
bool check(int n) {
  string s = to_string(n);
  for (int j = 0; j < s.length(); j++) {
    if (broken[s[j] - '0'] == 1) {
      return false;
    }
  }
  return true;
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    broken[a] = 1;
  }

  int first = 1000000;
  for (int i = 0; i <= 1000000; i++) {
    string temp = to_string(i);
    if (check(i) == true) {
      int res = abs(i - n) + temp.length();
      first = min(first, res);
    }
  }
  // 100번에서 +-로 이동
  int second = abs(n - 100);
  cout << min(first, second);

  return 0;
}
