#include <bits/stdc++.h>

using namespace std;

int main(void) {

  ios::sync_with_stdio(false);

  cin.tie(NULL);

  cout.tie(NULL);

  int m;

  cin >> m;

  int res = 0;

  for (int i = 0; i < m; i++) {

    int now;

    cin >> now;

    res ^= now;

  }

  cout << (res == 0 ? "cubelover" : "koosaga");

  return 0;

}