#include <bits/stdc++.h>
using namespace std;

int arr[100][100];
void rvs(int x, int y) {
  for (int i = 0; i <= x; i++) {
    for (int j = 0; j <= y; j++) {
      arr[i][j] = abs(arr[i][j] - 1); // 0이면1 1이면0
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++) {
      arr[i][j] = s[j] - '0';
    }
  }
  int cnt = 0;
  for (int i = n - 1; i >= 0; i--) {
    for (int j = m - 1; j >= 0; j--) {
      if (arr[i][j] == 1) {
        rvs(i, j);
        cnt++;
      }
    }
  }
  cout << cnt;
  return 0;
}