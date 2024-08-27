#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<tuple<int, int, char>> v(m);
  for (int i = 0; i < m; i++) {
    int num, time;
    char c;
    cin >> num >> time >> c;
    v[i] = {time, num, c};
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < m; i++) {
    cout << get<2>(v[i]);
  }
  return 0;
}