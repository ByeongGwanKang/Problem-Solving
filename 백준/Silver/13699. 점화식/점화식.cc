#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<long long> v(n + 1);
  v[0] = 1;
  for (int i = 1; i <= n; i++) {
    long long temp = 0;
    for (int j = 0; j < i; j++) {
      temp += v[j] * v[i - j - 1];
    }
    v[i] = temp;
  }
  cout << v[n];
  return 0;
}