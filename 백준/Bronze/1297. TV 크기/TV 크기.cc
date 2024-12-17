#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  double d, h, w;
  cin >> d >> h >> w;
  double tmp = sqrt(h * h + w * w);
  double div = d / tmp;
  cout << floor(h * div) << " " << floor(w * div);
  return 0;
}