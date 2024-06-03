#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<tuple<int, int, int, string>> v(n);
  for (int i = 0; i < n; i++) {
    int a, b, c;
    string s;
    cin >> s >> a >> b >> c;
    v[i] = make_tuple(-a, b, -c, s);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    cout << get<3>(v[i]) << "\n";
  }
  return 0;
}