#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<pair<int, int>> arr(1000001);
  arr[1].first = 0;
  arr[1].second = 0;
  arr[2].first = 1;
  arr[2].second = 1;
  arr[3].first = 1;
  arr[3].second = 1;
  for (int i = 4; i <= n; i++) {
    if (i % 2 == 0 && i % 3 == 0) {
      arr[i].first = min(
          {arr[i - 1].first + 1, arr[i / 2].first + 1, arr[i / 3].first + 1});
      if (arr[i].first == arr[i - 1].first + 1) {
        arr[i].second = i - 1;
      }
      if (arr[i].first == arr[i / 2].first + 1) {
        arr[i].second = i / 2;
      }
      if (arr[i].first == arr[i / 3].first + 1) {
        arr[i].second = i / 3;
      }
    } else if (i % 3 == 0) {
      arr[i].first = min(arr[i - 1].first + 1, arr[i / 3].first + 1);
      if (arr[i].first == arr[i - 1].first + 1) {
        arr[i].second = i - 1;
      }
      if (arr[i].first == arr[i / 3].first + 1) {
        arr[i].second = i / 3;
      }
    } else if (i % 2 == 0) {
      arr[i].first = min(arr[i - 1].first + 1, arr[i / 2].first + 1);
      if (arr[i].first == arr[i - 1].first + 1) {
        arr[i].second = i - 1;
      }
      if (arr[i].first == arr[i / 2].first + 1) {
        arr[i].second = i / 2;
      }
    } else {
      arr[i].first = arr[i - 1].first + 1;
      arr[i].second = i - 1;
    }
  }
  cout << arr[n].first << "\n";
  while (true) {
    cout << n << " ";
    if (arr[n].second == 0) {
      return 0;
    }
    n = arr[n].second;
  }
  return 0;
}
