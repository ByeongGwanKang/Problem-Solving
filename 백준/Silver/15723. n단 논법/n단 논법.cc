#include <bits/stdc++.h>
using namespace std;

#define INF 123456789
int adj[26][26];
int dist[26][26];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string trash;
    char s, e;
    cin >> s >> trash >> e;
    adj[s - 'a'][e - 'a'] = 1;
  }
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < 26; j++) {
      if (i == j) {
        dist[i][j] = 0;
      } else if (adj[i][j] == 0) {
        dist[i][j] = INF;
      } else {
        dist[i][j] = adj[i][j];
      }
    }
  }
  for (int k = 0; k < 26; k++) {
    for (int i = 0; i < 26; i++) {
      for (int j = 0; j < 26; j++) {
        dist[i][j] = min(dist[i][k] + dist[k][j], dist[i][j]);
      }
    }
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    string trash;
    char s, e;
    cin >> s >> trash >> e;
    if (dist[s - 'a'][e - 'a'] == INF) {
      cout << "F\n";
    } else {
      cout << "T\n";
    }
  }
  return 0;
}
