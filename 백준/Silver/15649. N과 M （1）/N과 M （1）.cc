#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[9];
int q[9];
void recursive(int cnt) {
  if (cnt == m) {
    for (int i = 0; i < m; i++) {
      cout << q[i] << " ";
    }
    cout << "\n";
    return;
  }
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      vis[i] = true;
      q[cnt] = i;
      recursive(cnt + 1);
      vis[i] = false;
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  recursive(0);
  return 0;
}
