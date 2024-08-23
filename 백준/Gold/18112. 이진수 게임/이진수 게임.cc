#include <bits/stdc++.h>
using namespace std;

int binary_to_int(string s) {
  int ret = 0;
  int sq = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') {
      ret += pow(2, sq);
    }
    sq++;
  }
  return ret;
}
int dist[2048];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s, e;
  cin >> s >> e;
  memset(dist, -1, sizeof(dist));
  reverse(s.begin(), s.end());
  reverse(e.begin(), e.end());
  int s_num = binary_to_int(s);
  int e_num = binary_to_int(e);
  queue<int> q;
  q.push(s_num);
  dist[s_num] = 0;
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (int i = 0, j = now; j >> 1; j >>= 1, i++) {
      int nxt = now ^ (1 << i);
      if (dist[nxt] == -1) {
        q.push(nxt);
        dist[nxt] = dist[now] + 1;
      }
    }
    if (now + 1 < 2048 && dist[now + 1] == -1) {
      q.push(now + 1);
      dist[now + 1] = dist[now] + 1;
    }
    if (now >= 1 && dist[now - 1] == -1) {
      q.push(now - 1);
      dist[now - 1] = dist[now] + 1;
    }
  }
  cout << dist[e_num];
  return 0;
}