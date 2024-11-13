#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int sx, sy, ex, ey, px, py;
  cin >> sx >> sy >> ex >> ey >> px >> py;
  if (sx == ex) {
    if (sx == px && sy > py && ey > py) {
      cout << 0;
      return 0;
    }
    if (sx == px && sy < py && ey < py) {
      cout << 0;
      return 0;
    } else if (sx == px) {
      cout << 2;
      return 0;
    } else {
      cout << 0;
      return 0;
    }
  }
  if (sy == ey) {
    if (sy == py && sx > px && ex > px) {
      cout << 0;
      return 0;
    }
    if (sy == py && sx < px && ex < px) {
      cout << 0;
      return 0;
    } else if (sy == py) {
      cout << 2;
      return 0;
    } else {
      cout << 0;
      return 0;
    }
  } else {
    cout << 1;
    return 0;
  }
  return 0;
}