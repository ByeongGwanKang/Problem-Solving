#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, q;
  cin >> n >> q;
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].first >> p[i].second;
  }
  while (q--) {
    int x, y;
    cin >> x >> y;
    int m = 987654321;
    vector<int> voronoi;
    for (int i = 0; i < n; i++) {
      int tmp = (x - p[i].first) * (x - p[i].first) +
                (y - p[i].second) * (y - p[i].second);
      if (m > tmp) {
        m = tmp;
        voronoi.clear();
        voronoi.push_back(i + 1);
      } else if (m == tmp) {
        voronoi.push_back(i + 1);
      }
    }
    int s = voronoi.size();
    if (s == 0) {
      cout << "NONE\n";
    } else if (s == 1) {
      cout << "REGION " << voronoi[0] << "\n";
    } else if (s == 2) {
      cout << "LINE " << voronoi[0] << " " << voronoi[1] << "\n";
    } else {
      cout << "POINT\n";
    }
  }
  return 0;
}