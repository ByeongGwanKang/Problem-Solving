#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int lh = 0, rh = 0, mid = 0, ll = 0, rl = 0;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  pair<int, int> head;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] == '*') {
        head.first = i;
        head.second = j;
        i = n;
        break;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (v[head.first + 1][i] == '*') {
      if (i < head.second) {
        lh++;
      } else if (i > head.second) {
        rh++;
      }
    }
  }
  int mid_last;
  for (int i = head.first + 2; i < n; i++) {
    if (v[i][head.second] == '*') {
      mid++;
      mid_last = i;
    }
  }
  for (int i = mid_last + 1; i < n; i++) {
    if (v[i][head.second - 1] == '*') {
      ll++;
    }
    if (v[i][head.second + 1] == '*') {
      rl++;
    }
  }
  cout << head.first + 2 << " " << head.second + 1 << "\n";
  cout << lh << " " << rh << " " << mid << " " << ll << " " << rl;
  return 0;
}