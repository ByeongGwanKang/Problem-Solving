#include <bits/stdc++.h>
using namespace std;

const int INF = 123456789;
int cache[100001][5][5];
int ddr[5][5];
vector<int> v;
int dp(int now, int left, int right) {
  if (now == v.size()) {
    return 0;
  }
  if (left == right && left != 0) {
    return INF;
  }
  int &ret = cache[now][left][right];
  if (ret != -1) {
    return ret;
  }
  return ret=min(dp(now + 1, v[now], right) + ddr[left][v[now]],
             dp(now + 1, left, v[now]) + ddr[right][v[now]]);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 0; i < 5; i++) {
    ddr[i][i] = 1;
  }
  for (int i = 1; i < 5; i++) {
    ddr[0][i] = 2;
  }
  ddr[1][2] = ddr[1][4] = ddr[2][1] = ddr[2][3] = ddr[3][2] = ddr[3][4] =
      ddr[4][1] = ddr[4][3] = 3;
  ddr[1][3] = ddr[2][4] = ddr[3][1] = ddr[4][2] = 4;
  memset(cache, -1, sizeof(cache));
  while (true) {
    int val;
    cin >> val;
    if (val == 0) {
      break;
    }
    v.push_back(val);
  }
  cout << dp(0, 0, 0);
  return 0;
}