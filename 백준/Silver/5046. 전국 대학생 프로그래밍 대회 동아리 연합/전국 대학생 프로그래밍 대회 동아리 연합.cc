#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, b, h, w;
  cin >> n >> b >> h >> w;
  int ans = 123456789;
  bool flag = false;
  for (int i = 0; i < h; i++) {
    int p;
    cin >> p;

    for (int j = 0; j < w; j++) {
      int able;
      cin >> able;
      //인원 초과
      if (able < n) {
        continue;
      }
      //예산 초과
      if (b < n * p) {
        continue;
      }
      ans = min(ans, n * p);
      flag = true;
    }
  }
  if (flag) {
    cout << ans;
  } else {
    cout << "stay home";
  }
  return 0;
}