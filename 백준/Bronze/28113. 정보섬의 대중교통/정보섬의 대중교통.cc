#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, a, b;
  cin >> n >> a >> b;
  if (n > b) {
    cout << "Bus";
  }
  if (b > a) {
    cout << "Bus";
  } else if (b == a) {
    cout << "Anything";
  } else {
    cout << "Subway";
  }
  return 0;
}