#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int ans = 0;
  string s;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    ans ^= val - 2;
  }
  cin >> s;
  if (s == "Whiteking") {
    cout << (ans ? "Whiteking" : "Blackking");
  } else {
    cout << (ans ? "Blackking" : "Whiteking");
  }
  return 0;
}