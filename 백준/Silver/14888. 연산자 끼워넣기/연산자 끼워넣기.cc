#include <bits/stdc++.h>
using namespace std;

int n;
int arr[11];
int op[4];
int mx = -1234567890, mn = 1234567890;
void BT(int now, int idx) {
  if (idx == n) {
    mx = max(mx, now);
    mn = min(mn, now);
    return;
  }
  if (op[0] > 0) {
    op[0]--;
    BT(now + arr[idx], idx + 1);
    op[0]++;
  }
  if (op[1] > 0) {
    op[1]--;
    BT(now - arr[idx], idx + 1);
    op[1]++;
  }
  if (op[2] > 0) {
    op[2]--;
    BT(now * arr[idx], idx + 1);
    op[2]++;
  }
  if (op[3] > 0) {
    op[3]--;
    if (now < 0) {
      BT(-(-now / arr[idx]), idx + 1);
    } else {
      BT(now / arr[idx], idx + 1);
    }
    op[3]++;
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < 4; i++) {
    cin >> op[i];
  }
  BT(arr[0], 1);
  cout << mx << "\n" << mn;
  return 0;
}