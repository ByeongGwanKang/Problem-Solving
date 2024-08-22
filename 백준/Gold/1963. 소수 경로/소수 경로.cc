#include <bits/stdc++.h>
using namespace std;

bool isPrime[10000];
int dist[10000];
void BFS(int s, int e) {
  queue<int> q;
  q.push(s);
  dist[s] = 0;
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    if (now == e) {
      cout << dist[e] << "\n";
      return;
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 10; j++) {
        string tmp = to_string(now);
        tmp[i] = '0' + j;
        int next = stoi(tmp);
        if (isPrime[next] == false) {
          continue;
        }
        if (dist[next] != -1) {
          continue;
        }
        if (next >= 10000 || next < 1000) {
          continue;
        }
        dist[next] = dist[now] + 1;
        q.push(next);
      }
    }
  }
  cout << "Impossible\n";
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  memset(isPrime, true, sizeof(isPrime));
  for (int i = 2; i <= 100; i++) {
    if (isPrime[i] == false) {
      continue;
    }
    for (int j = i * i; j < 10000; j += i) {
      isPrime[j] = false;
    }
  }
  while (t--) {
    memset(dist, -1, sizeof(dist));
    int s, e;
    cin >> s >> e;
    BFS(s, e);
  }
  return 0;
}