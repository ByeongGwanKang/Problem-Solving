#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int h, w;
  cin >> h >> w;
  cout << min(h, w) * 50;
  return 0;
}