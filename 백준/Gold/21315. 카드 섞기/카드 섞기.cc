#include <bits/stdc++.h>
using namespace std;

int v[1000];
int target[1000];
int n;
void shuffle(int prev, int now) {
  int tmp[1000];
  int idx = 0;
  for (int i = prev - now; i < prev; i++) {
    tmp[idx] = v[i];
    idx++;
    v[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    if (v[i] != 0) {
      tmp[idx] = v[i];
      idx++;
    }
    v[i] = tmp[i];
  }
}
void chk(int k) {
  int prev = n;
  for (int i = 1; i <= k + 1; i++) {
    int now = pow(2, k + 1 - i);
    shuffle(prev, now);
    prev = now;
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> target[i];
  }
  for (int i = 1; pow(2, i) < n; i++) {
    for (int j = 1; pow(2, j) < n; j++) {
      for (int i = 0; i < n; i++) {
        v[i] = i + 1;
      }
      chk(i);
      chk(j);
      if (equal(v, v + n, target)) {
        cout << i << " " << j;
        return 0;
      }
    }
  }
  return 0;
}