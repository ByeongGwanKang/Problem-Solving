#include <bits/stdc++.h>
using namespace std;

string arr[101];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 1; i < n; i++) {
    bool flag = false;
    if(arr[i-1]==arr[i]){
      flag=true;
    }
    for (int j = 1; j < m; j++) {
      if (arr[i - 1].substr(0, j) == arr[i].substr(m - j)) {
        flag = true;
      }
      if (arr[i].substr(0, j) == arr[i - 1].substr(m - j)) {
        flag = true;
      }
    }
    if (!flag) {
      cout << 0;
      return 0;
    }
  }
  cout << 1;
  return 0;
}