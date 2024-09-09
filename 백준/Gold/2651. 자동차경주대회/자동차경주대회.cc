#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum[102]; // i번째 정비소를 들렀을 때 최소 시간
int dist[102];
int before[102];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int mxdist;
  cin >> mxdist;
  int n;
  cin >> n;
  vector<int> dist(n + 2); // i+1번째 정비소까지 거리 누적합
  vector<int> time(n + 2); // i번째 정비소 정비시간
  for (int i = 1; i <= n + 1; i++) {
    int now;
    cin >> now;
    dist[i] = dist[i - 1] + now;
    sum[i] = LLONG_MAX;
  }
  for (int i = 1; i <= n; i++) {
    cin >> time[i];
  }
  for (int i = 1; i <= n + 1; i++) {
    if (dist[i] <= mxdist) {
      sum[i] = time[i];
    }
  }
  for (int i = 1; i <= n + 1; i++) {
    for (int j = 1; j < i; j++) {
      if (dist[i] - dist[j] <= mxdist && sum[i] > sum[j] + time[i]) {
        sum[i] = sum[j] + time[i];
        before[i] = j;
      }
    }
  }
  cout << sum[n + 1] << "\n";
  int now = before[n + 1];
  int cnt = 0;
  vector<int> ans;
  while (now != 0) {
    cnt++;
    ans.push_back(now);
    now = before[now];
  }
  cout << ans.size() << "\n";
  reverse(ans.begin(), ans.end());
  for (auto a : ans) {
    cout << a << " ";
  }
  return 0;
}