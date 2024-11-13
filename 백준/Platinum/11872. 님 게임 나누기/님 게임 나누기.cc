#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    if (val % 4 == 0) {
      ans ^= val - 1;
    } else if (val % 4 == 3) {
      ans ^= val + 1;
    } else {
      ans ^= val;
    }
  }
  cout << (ans ? "koosaga" : "cubelover");
  return 0;
}