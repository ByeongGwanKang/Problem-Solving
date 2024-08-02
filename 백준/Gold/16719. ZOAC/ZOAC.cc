#include <bits/stdc++.h>
using namespace std;

bool check[100];
string s;
void f(int start, int end) {
  int best = start;
  for (int i = start; i <= end; i++) {
    if (s[best] > s[i]) {
      best = i;
    }
  }
  check[best] = true;
  for (int i = 0; i < s.length(); i++) {
    if (check[i]) {
      cout << s[i];
    }
  }
  cout << "\n";
  if (best + 1 <= end) {
    f(best + 1, end);
  }
  if (best - 1 >= start) {
    f(start, best - 1);
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> s;
  f(0, s.length() - 1);
  return 0;
}