#include <bits/stdc++.h>
using namespace std;


int arr[1001][1001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++) {
    for (int j = 0; j < b.length(); j++) {
      if (a[i] == b[j]) {
        arr[i + 1][j + 1] = arr[i][j] + 1;
      } else {
        arr[i + 1][j + 1] = max(arr[i + 1][j], arr[i][j + 1]);
      }
    }
  }
  cout << arr[a.length()][b.length()];
  return 0;
}
