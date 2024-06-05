#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << 1;
  }
  for (int i = 0; i < n - 1; i++) {
    cout << 0;
  }
  return 0;
}