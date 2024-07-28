#include <bits/stdc++.h>
using namespace std;

char arr[1024][1024];

void star(int x, int y, int size) {
  arr[x][y] = '*';
  if (size == 0) {
    return;
  }
  int next = size / 2;
  star(x, y, next);
  star(x + next, y, next);
  star(x, y + next, next);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int size = pow(2, n);
  for (int i = 0; i < size; i++) {
    fill(arr[i], arr[i] + size - i, ' ');
  }
  star(0, 0, size);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i; j++) {
      cout << arr[i][j];
    }
    cout << "\n";
  }
  return 0;
}