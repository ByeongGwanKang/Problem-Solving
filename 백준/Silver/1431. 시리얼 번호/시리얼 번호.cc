#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
  int alen = a.length();
  int blen = b.length();
  if (alen < blen) {
    return true;
  }
  if (alen > blen) {
    return false;
  }
  if (alen == blen) {
    int asum = 0;
    int bsum = 0;
    for (int i = 0; i < alen; i++) {
      if (a[i] > '0' && a[i] <= '9') {
        asum += a[i] - '0';
      }
      if (b[i] > '0' && b[i] <= '9') {
        bsum += b[i] - '0';
      }
    }
    if (asum == bsum) {
      return a < b;
    }
    return asum < bsum;
  }
  return a < b;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < n; i++) {
    cout << v[i] << "\n";
  }
  return 0;
}