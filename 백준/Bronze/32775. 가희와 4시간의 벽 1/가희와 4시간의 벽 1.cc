#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b;
  cin >> a >> b;
  if (a > b) {
    cout << "flight";
  } else {
    cout << "high speed rail";
  }
  return 0;
}