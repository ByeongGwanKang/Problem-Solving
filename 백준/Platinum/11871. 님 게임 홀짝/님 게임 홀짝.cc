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
    int rock;
    cin >> rock;
    if (rock % 2 == 0) {
      ans ^= (rock / 2) - 1;
    } else {
      ans ^= (rock + 1) / 2;
    }
  }
  cout << (ans ? "koosaga" : "cubelover");
  return 0;
}