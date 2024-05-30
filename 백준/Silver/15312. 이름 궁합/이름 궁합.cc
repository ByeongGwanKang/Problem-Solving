#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int arr[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2,
                 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
  string a, b;
  vector<int> v;
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++) {
    v.push_back(arr[a[i] - 'A']);
    v.push_back(arr[b[i] - 'A']);
  }
  int s = v.size();
  while (s > 2) {
    vector<int> v2;
    for (int i = 0; i < s - 1; i++) {
      int tmp = v[i] + v[i + 1];
      if (tmp >= 10)
        tmp -= 10;
      v2.push_back(tmp);
    }
    v = v2;
    s--;
  }
  cout << v[0] << v[1];
  return 0;
}