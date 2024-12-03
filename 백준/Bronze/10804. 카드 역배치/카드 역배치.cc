#include <bits/stdc++.h>
using namespace std;

int arr[21];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 1; i <= 20; i++) {
    arr[i] = i;
  }
  for (int i = 0; i < 10; i++) {
    int s, e;
    cin >> s >> e;
    reverse(arr + s, arr + e + 1);
  }
  for (int i = 1; i <= 20; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}