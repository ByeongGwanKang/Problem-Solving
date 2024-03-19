#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[9];
void recursive(int cnt, int idx) {
  if (cnt == m) {
    for (int i = 1; i <= n; i++) {
      if (vis[i]) {
        cout << i << " ";
      }
    }
    cout << "\n";
    return;
  }
  for (int i = idx; i <= n; i++) {
    if (!vis[i]) {
      vis[i] = true;
      recursive(cnt + 1, i);
      vis[i] = false;
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  recursive(0, 1);
  return 0;
}
