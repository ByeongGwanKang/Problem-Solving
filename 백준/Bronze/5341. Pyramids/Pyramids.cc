#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      return 0;
    }
    cout << n * (n + 1) / 2 << "\n";
  }
  return 0;
}