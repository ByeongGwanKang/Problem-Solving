#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b;
  cin >> a >> b;
  int m;
  cin >> m;
  int sum = 0;
  for (int i = m - 1; i >= 0; i--) {
    int num;
    cin >> num;
    sum += num * pow(a, i);
  }
  vector<int> ans;
  while (true) {
    int div = sum % b;
    // cout << div << "div ";
    if (sum / b > 0) {
      ans.push_back(div);
      sum /= b;
    } else {
      ans.push_back(div);
      break;
    }
  }
  reverse(ans.begin(), ans.end());
  for (auto a : ans) {
    cout << a << " ";
  }
  return 0;
}