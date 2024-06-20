#include <bits/stdc++.h>
using namespace std;

int count_five(int n) {
  int cnt = 0;
  for (int i = 5; i <= n; i *= 5) {
    cnt += (n / i);
  }
  return cnt;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int m;
  cin >> m;
  int left = 1;
  int right = m * 5;
  while (left < right) {
    int mid = (left + right) / 2;
    int five = count_five(mid);
    if (five < m) {
      left = mid + 1;

    } else if (five == m) {
      right = mid;
    } else {
      right = mid - 1;
    }
  }
  if (count_five(left) == m) {
    cout << left;
  } else {
    cout << -1;
  }
  return 0;
}