#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int, char>, vector<pair<int, char>>,
               greater<pair<int, char>>>
    pq;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b, n;
  cin >> a >> b >> n;
  int s_time = -1;
  int j_time = -1;
  for (int i = 0; i < n; i++) {
    int t, m;
    char c;
    cin >> t >> c >> m;
    int cnt = 0;
    if (c == 'B') {
      if (s_time > t) {
        t = s_time;
      }
      for (int j = t; cnt < m; j += a) {
        cnt++;
        pq.push({j, c});
      }
      s_time = t + a * m;
    } else {
      if (j_time > t) {
        t = j_time;
      }
      for (int j = t; cnt < m; j += b) {
        cnt++;
        pq.push({j, c});
      }
      j_time = t + b * m;
    }
  }
  vector<int> sm;
  vector<int> js;
  int idx = 1;
  while (!pq.empty()) {
    auto a = pq.top();
    pq.pop();
    if (a.second == 'B') {
      sm.push_back(idx++);
    } else {
      js.push_back(idx++);
    }
  }
  cout << sm.size() << "\n";
  for (auto a : sm) {
    cout << a << " ";
  }
  cout << "\n" << js.size() << "\n";
  for (auto a : js) {
    cout << a << " ";
  }
  return 0;
}