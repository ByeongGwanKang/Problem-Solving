#include <bits/stdc++.h>
using namespace std;

int adj[101][101];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> adj[i][j];
    }
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (adj[i][k] && adj[k][j])
          adj[i][j] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (adj[i][j] != 0) {
        cout << 1 << " ";
      } else {
        cout << 0 << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
