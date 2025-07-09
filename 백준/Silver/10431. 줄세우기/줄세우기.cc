#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int p;
  cin >> p;
  vector<int> v(20);
  for (int t = 1; t <= p; t++) {
    int cnt = 0;
    int num;
    cin >> num;
    for (int i = 0; i < 20; i++) {
      cin >> v[i];
      for (int j = 0; j < i; j++) {
        if (v[j] > v[i]) {
          int temp = v[i];
          for (int k = i; k > j; k--) {
            v[k] = v[k - 1];
            cnt++;
          }
          v[j] = temp;
          break;
        }
      }
    }
    cout << num << " " << cnt << "\n";
  }
  return 0;
}