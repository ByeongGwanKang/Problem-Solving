#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<pair<int, int>> A(n);
  vector<pair<int, int>> B(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i].first >> A[i].second;
  }
  for (int i = 0; i < n; i++) {
    cin >> B[i].first >> B[i].second;
  }
  int cnt = 0;
  bool flag = false;
  for (int i = 0; i < n; i++) {
    //차원이 증가하는 경우
    if (min(A[i].second, B[i].second) - max(A[i].first, B[i].first) > 0) {
      cnt++;
      flag = true;
    }
    //차원이 증가하지 않는 경우(점)
    else if (min(A[i].second, B[i].second) - max(A[i].first, B[i].first) == 0) {
      flag = true;
    } else {
      cout << -1;
      return 0;
    }
  }
  if (flag == false) {
    cout << -1;
    return 0;
  }
  cout << cnt;
  return 0;
}