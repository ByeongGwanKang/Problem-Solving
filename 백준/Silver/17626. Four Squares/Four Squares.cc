#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n + 1, 0);
  int root = sqrt(n);
  for (int i = 1; i <= root; i++) {
    v[i * i] = 1;
    for (int j = i; j <= root; j++) {
      if (i * i + j * j > n) {
        break;
      }
      if (v[i * i + j * j] == 3 || v[i * i + j * j] == 0) {
        v[i * i + j * j] = 2;
      }
      for (int k = j; k <= root; k++) {
        if (i * i + j * j + k * k > n) {
          break;
        }
        if (v[i * i + j * j + k * k] == 0) {
          v[i * i + j * j + k * k] = 3;
        }
      }
    }
  }
  if (v[n] == 0) {
    cout << 4;
  } else {
    cout << v[n];
  }
  return 0;
}