#include <bits/stdc++.h>
using namespace std;

int arr[4000][4000];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = 0; i < a.length(); i++) {
    for (int j = 0; j < b.length(); j++) {
      if (a[i] == b[j]) {
        if (i == 0 || j == 0) {
          arr[i][j] = 1;
        } else {
          arr[i][j] = arr[i - 1][j - 1] + 1;
          ans = max(ans, arr[i][j]);
        }
      }
    }
  }
  cout << ans;
  return 0;
}
