#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v;
  v.push_back(0);
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  v.push_back(0);
  for (int i = 1; i <= n; i++) {
    if (v[i] >= v[i - 1] && v[i] >= v[i + 1]) {
      cout << i << "\n";
    }
  }
  return 0;
}