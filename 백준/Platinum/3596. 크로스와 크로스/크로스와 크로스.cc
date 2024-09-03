#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<bool> grundy(100);
  vector<int> cache(n+1);
  cache[1] = cache[2] = cache[3] = 1;
  for (int i = 4; i <= n; i++) {
    grundy.assign(100, false);
    for (int j = 1; j <= (i + 1) / 2; j++) {
      int now = (j > 3 ? cache[j - 3] : 0) ^ cache[i - j - 2];
      grundy[now] = true;
    }
    for (int j = 0; j < 100; j++) {
      if (!grundy[j]) {
        cache[i] = j;
        break;
      }
    }
  }
  cout << (cache[n] == 0 ? 2 : 1);
  return 0;
}