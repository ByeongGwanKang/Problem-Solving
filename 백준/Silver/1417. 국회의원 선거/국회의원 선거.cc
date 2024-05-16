#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  priority_queue<int> pq;
  int my;
  cin >> my;
  for (int i = 1; i < n; i++) {
    int other;
    cin >> other;
    pq.push(other);
  }
  int ans = 0;
  while (!pq.empty() && my <= pq.top()) {
    int now = pq.top();
    pq.pop();
    now--;
    pq.push(now);
    ans++;
    my++;
  }
  cout << ans;
  return 0;
}