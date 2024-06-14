#include <bits/stdc++.h>
using namespace std;

vector<int> arr[101];
double water[101];
bool isend[101];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout << fixed;
  cout.precision(6);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int v, w;
    cin >> v >> w;
    arr[v].push_back(w);
  }
  water[1] = 100;
  for (int i = 1; i <= n; i++) {
    int s = arr[i].size();
    for (auto a : arr[i]) {
      water[a] += water[i] / s;
      isend[i] = true;
    }
  }
  double ans = 0;
  for (int i = 1; i <= n; i++) {
    if (isend[i] == false) {
      ans = max(ans, water[i]);
    }
  }
  cout << ans;
  return 0;
}