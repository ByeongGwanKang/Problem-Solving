#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int A = 0, B = 0;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    A += 10 + 10 * (val / 30);
    B += 15 + 15 * (val / 60);
  }
  if (A == B) {
    cout << "Y M " << A;
  } else if (A > B) {
    cout << "M " << B;
  } else {
    cout << "Y " << A;
  }
  return 0;
}