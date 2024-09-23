#include <bits/stdc++.h>
using namespace std;

int fibo[44];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  fibo[0] = 1;
  fibo[1] = 2;
  for (int i = 2; i <= 43; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
  while (t--) {
    int n;
    cin >> n;
    vector<int> ans;
    int remain = n;
    int idx = 43;
    while (remain > 0) {
      if (fibo[idx] > remain) {
        idx--;
      } else {
        remain -= fibo[idx];
        ans.push_back(fibo[idx]);
        idx--;
      }
    }
    reverse(ans.begin(), ans.end());
    for (auto a : ans) {
      cout << a << " ";
    }
    cout << "\n";
  }
  return 0;
}