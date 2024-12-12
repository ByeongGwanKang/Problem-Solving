#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<bool> grundy(100);
  vector<int> cache(n + 1);
  for (int i = 2; i <= n; i++) {
    grundy.assign(100, false);
    for (int j = 1; j <= (i + 1) / 2; j++) {
      int tmp = cache[j - 1] ^ cache[i - j - 1];
      grundy[tmp] = true;
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