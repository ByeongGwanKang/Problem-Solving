#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.first == p2.first) {
    return p1.second > p2.second;
  }
  return p1.first < p2.first;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, t;
  cin >> n >> t;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v[i] = {a, b};
  }
  //일찍 시작, 늦게 끝나는 순 정렬
  sort(v.begin(), v.end(), cmp);
  int i = 0;
  int prev = 0, end = 0, cnt = 0;
  while (prev < t) {
    while (i < n && v[i].first <= prev + 1) {
      end = max(end, v[i].second);
      i++;
    }
    if (end == prev) {
      cout << -1;
      return 0;
    }
    prev = end;
    cnt++;
  }
  cout << cnt;
  return 0;
}