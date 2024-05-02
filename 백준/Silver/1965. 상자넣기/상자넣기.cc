#include <bits/stdc++.h>
using namespace std;

int ans[1001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (v[j] < v[i]) {
        ans[i] = max(ans[i], ans[j] + 1);
      }
    }
  }
  cout << *max_element(ans, ans + n) + 1;
}