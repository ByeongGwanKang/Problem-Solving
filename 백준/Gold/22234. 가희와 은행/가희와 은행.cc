#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, t, w;
  cin >> n >> t >> w;
  deque<pair<int, int>> dq;
  for (int i = 0; i < n; i++) {
    int p, time;
    cin >> p >> time;
    dq.push_back({p, time});
  }
  int m;
  cin >> m;
  priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
                 greater<tuple<int, int, int>>>
      pq;
  for (int i = 0; i < m; i++) {
    int p, time, c;
    cin >> p >> time >> c;
    pq.push({c, p, time});
  }
  int tmp = 0;
  for (int i = 1; i <= w; i++) {
    tmp++;
    //시간 된사람 입장
    while (!pq.empty() && get<0>(pq.top()) <= i) {
      dq.push_back({get<1>(pq.top()), get<2>(pq.top())});
      pq.pop();
    }
    dq.front().second--;
    cout << dq.front().first << "\n";
    //완료한 고객
    if (dq.front().second == 0) {
      dq.pop_front();
      tmp = 0;
    } else if (tmp == t) {
      tmp = 0;
      dq.push_back(dq.front());
      dq.pop_front();
    }
  }
  return 0;
}