#include <bits/stdc++.h>
using namespace std;

int ccw(int x1, int x2, int x3, int y1, int y2, int y3) {
  int res = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
  if (res < 0)
    return 1;
  else if (res == 0)
    return 0;
  else
    return -1;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int x1, x2, x3, x4, y1, y2, y3, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
  if (ccw(x1, x2, x3, y1, y2, y3) * ccw(x1, x2, x4, y1, y2, y4) < 0) {
    cout << 1;
  } else {
    cout << 0;
  }
  return 0;
}