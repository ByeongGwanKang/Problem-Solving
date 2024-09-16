#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int m;
  cin >> m;
  int res = 0;
  bool allOne = true;
  for (int i = 0; i < m; i++) {
    int now;
    cin >> now;
    res ^= now;
    if (now > 1) {
      allOne = false;
    }
  }
  if (allOne) {
    cout << (m % 2 ? "cubelover" : "koosaga");
  } else {
    cout << (res != 0 ? "koosaga" : "cubelover");
  }
  return 0;
}