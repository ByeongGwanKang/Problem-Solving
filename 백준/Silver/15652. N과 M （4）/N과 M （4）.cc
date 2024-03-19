#include <bits/stdc++.h>
using namespace std;

int n, m;
int vis[9];
void recursive(int cnt, int idx) {
  if (cnt == m) {
    for (int i = 1; i <= n; i++) {
      for (int j = vis[i]; j > 0; j--) {
        cout << i << " ";
      }
    }
    cout << "\n";
    return;
  }
  for (int i = idx; i <= n; i++) {
    vis[i]++;
    recursive(cnt + 1, i);
    vis[i]--;
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
