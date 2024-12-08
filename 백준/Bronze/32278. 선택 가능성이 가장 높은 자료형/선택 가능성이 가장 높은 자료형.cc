#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long n;
  cin >> n;
  if (n < INT_MIN || n > INT_MAX) {
    cout << "long long";
  } else if (n < -32768 || n > 32767) {
    cout << "int";
  } else {
    cout << "short";
  }
  return 0;
}