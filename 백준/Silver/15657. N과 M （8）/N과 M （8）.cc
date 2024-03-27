#include <bits/stdc++.h>
using namespace std;


int n, m;
int q[9];
vector<int> v;
void recursive(int cnt, int idx) {
  if (cnt == m) {
    for (int i = 0; i < m; i++) {
      cout << q[i] << " ";
    }
    cout << "\n";
    return;
  }
  for (int i = idx; i < n; i++) {
    q[cnt] = v[i];
    recursive(cnt + 1, i);
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    v.push_back(val);
  }
  sort(v.begin(), v.end());
  recursive(0, 0);
  return 0;
}
