#include <bits/stdc++.h>
using namespace std;

int DP[105][10005];
bool isYoon(int y) { return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0); }
int total(int y, int m, int d) {
  int arr[] = {31, (isYoon(y) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30,
               31};
  int ret = 0;
  for (int i = 0; i < m - 1; i++) {
    ret += arr[i];
  }
  ret += d;
  return ret;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int y1, y2, m1, m2, d1, d2;
  cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
  int t, n;
  cin >> t >> n;
  for (int i = 1; i <= n; i++) {
    int order, c, res;
    cin >> order >> c >> res;
    for (int j = 0; j <= t; j++) {
      if (j < c) {
        DP[i][j] = DP[i - 1][j];
      } else if (order == 1) {
        DP[i][j] = max(DP[i - 1][j - c] + res, DP[i - 1][j]);
      } else if (order == 2) {
        DP[i][j] = max(DP[i - 1][j - c] + res, DP[i - 1][j]);
      } else {
        DP[i][j] = max(DP[i - 1][j - c] + res * 30, DP[i - 1][j]);
      }
    }
  }
  int gap = 0;
  for (int i = y1; i < y2; i++) {
    gap += isYoon(i) ? 366 : 365;
  }
  gap += (total(y2, m2, d2) - total(y1, m1, d1));
  cout << abs(gap - DP[n][t]);
  return 0;
}