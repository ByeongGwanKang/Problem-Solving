#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a1, b1, a2, b2, a3, b3, a4, b4;
  cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
  double g_expect1 = double(a1 + b1) / 2;
  double g_expect2 = double(a2 + b2) / 2;
  double e_expect1 = double(a3 + b3) / 2;
  double e_expect2 = double(a4 + b4) / 2;
  if (g_expect1 + g_expect2 > e_expect1 + e_expect2) {
    cout << "Gunnar";
  } else if (g_expect1 + g_expect2 < e_expect1 + e_expect2) {
    cout << "Emma";
  } else {
    cout << "Tie";
  }
  return 0;
}