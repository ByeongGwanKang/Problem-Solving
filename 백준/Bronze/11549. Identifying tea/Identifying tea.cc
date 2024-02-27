#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    int val;
    cin >> val;
    if (val == n) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}