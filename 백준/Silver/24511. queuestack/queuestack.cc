#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> val(n);
  deque<int> dq;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if (v[i] == 0) {
      dq.push_back(tmp);
    }
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int now;
    cin >> now;
    dq.push_front(now);
    cout << dq.back() << " ";
    dq.pop_back();
  }
  return 0;
}