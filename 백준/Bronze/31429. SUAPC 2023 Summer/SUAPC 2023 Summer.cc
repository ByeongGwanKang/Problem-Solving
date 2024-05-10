#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int rank[] = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
  int p[] = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};
  int n;
  cin >> n;
  cout << rank[n - 1] << " " << p[n - 1];
  return 0;
}