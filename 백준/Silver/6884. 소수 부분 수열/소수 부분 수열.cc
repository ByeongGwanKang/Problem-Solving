#include <bits/stdc++.h>
using namespace std;

bool prime[100000000];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  memset(prime, true, sizeof(prime));
  for (int i = 2; i * i < 100000000; i++) {
    if (prime[i] == false)
      continue;
    for (int j = i * 2; j < 100000000; j += i) {
      prime[j] = false;
    }
  }
  int t;
  cin >> t;
  while (t--) {
    bool flag = false;
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
      v[i] += v[i - 1];
    }
    for (int i = 2; i <= n; i++) {
      if (flag) {
        break;
      }
      for (int j = i; j <= n; j++) {
        if (prime[v[j] - v[j - i]]) {
          flag = true;
          cout << "Shortest primed subsequence is length " << i << ": ";
          for (int k = j - i + 1; k <= j; k++) {
            cout << v[k] - v[k - 1] << " ";
          }
          break;
        }
      }
    }
    if (!flag) {
      cout << "This sequence is anti-primed.";
    }
    cout << "\n";
  }
  return 0;
}