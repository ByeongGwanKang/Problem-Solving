#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < 20000; i++) {
    char c;
    cout << "? 1" << endl;
    cin >> c;
    if (c == 'Y') {
      cout << "! 1" << endl;
      return 0;
    }
  }
  return 0;
}