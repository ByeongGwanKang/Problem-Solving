#include <bits/stdc++.h>
using namespace std;

int n;
int ans = 1e9;
string now, want, tmp;
void light(int idx) {
  if (idx > 0) {
    tmp[idx - 1] = (tmp[idx - 1] == '0') ? '1' : '0';
  }
  tmp[idx] = (tmp[idx] == '0') ? '1' : '0';
  if (idx < n - 1) {
    tmp[idx + 1] = (tmp[idx + 1] == '0') ? '1' : '0';
  }
}
void grd(bool first_option) {
  tmp = now;
  int cnt = 0;
  if (first_option) {
    tmp[0] = (tmp[0] == '0') ? '1' : '0';
    tmp[1] = (tmp[1] == '0') ? '1' : '0';
    cnt++;
  }
  for (int i = 1; i < n; i++) {
    if (tmp[i - 1] != want[i - 1]) {
      light(i);
      cnt++;
    }
  }
  if (tmp == want) {
    ans = min(ans, cnt);
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  cin >> now >> want;
  grd(true);
  grd(false);
  if (ans == 1e9) {
    cout << -1;
  } else
    cout << ans;
  return 0;
}