#include <bits/stdc++.h>
using namespace std;

int adj[51][51];
int dist[51][51];
int score[51];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  while (true) {
    int a, b;
    cin >> a >> b;
    if (a == -1 && b == -1) {
      break;
    }
    adj[a][b] = 1;
    adj[b][a] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (adj[i][j] != 0) {
        dist[i][j] = adj[i][j];
      } else if (i == j) {
        dist[i][j] = 0;
      } else {
        dist[i][j] = 123456789;
      }
    }
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }
  int score_ans = 51;
  for (int i = 1; i <= n; i++) {
    int score_temp = 0;
    for (int j = 1; j <= n; j++) {
      score_temp = max(score_temp, dist[i][j]);
    }
    score[i] = score_temp;
    score_ans = min(score_ans, score_temp);
  }
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    if (score[i] == score_ans) {
      ans.push_back(i);
    }
  }
  cout << score_ans << " " << ans.size() << "\n";
  for (auto a : ans) {
    cout << a << " ";
  }
  return 0;
}
