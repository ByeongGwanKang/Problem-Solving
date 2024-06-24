#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> v(6);
    long long sum = 0;
    for (int i = 0; i < 6; i++) {
      cin >> v[i];
      sum += v[i];
    }
    long long cnt = 0;
    while (true) {
      cnt++;
      if (sum > n) {
        cout << cnt << "\n";
        break;
      }
      sum *= 4;
    }
  }
  return 0;
}