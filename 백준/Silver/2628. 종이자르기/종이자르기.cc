#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int w, h;
  cin >> w >> h;
  int n;
  cin >> n;
  vector<int> x;
  vector<int> y;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (a == 0) {
      x.push_back(b);
    } else {
      y.push_back(b);
    }
  }
  int x_max;
  if (!x.empty()) {
    sort(x.begin(), x.end());
    x_max = x[0];
    for (int i = 1; i < x.size(); i++) {
      x_max = max(x_max, x[i] - x[i - 1]);
    }
    x_max = max(x_max, h - x[x.size() - 1]);
  } else {
    x_max = h;
  }
  int y_max;
  if (!y.empty()) {
    sort(y.begin(), y.end());
    y_max = y[0];
    for (int i = 1; i < y.size(); i++) {
      y_max = max(y_max, y[i] - y[i - 1]);
    }
    y_max = max(y_max, w - y[y.size() - 1]);
  } else {
    y_max = w;
  }
  cout << x_max * y_max;
  return 0;
}