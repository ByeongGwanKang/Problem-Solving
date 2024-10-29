#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[30][30];
int pick[3];
int ans = 0;
void rec(int idx, int cnt) {
  if (cnt != -1) {
    pick[cnt] = idx;
  }
  if (cnt == 2) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int best = -1;
      for (int j = 0; j < 3; j++) {
        best = max(best, arr[i][pick[j]]);
      }
      sum += best;
    }
    ans = max(sum, ans);
    return;
  }
  for (int i = idx; i < m; i++) {
    rec(i + 1, cnt + 1);
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  rec(-1, -1);
  cout << ans;
  return 0;
}