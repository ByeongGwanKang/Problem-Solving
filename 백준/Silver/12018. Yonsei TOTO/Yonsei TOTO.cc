#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  vector<int> best;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int p, l;
    cin >> p >> l;
    vector<int> v(p);
    for (int j = 0; j < p; j++) {
      cin >> v[j];
    }
    //정원이 더 많을 경우 마일리지 1사용 후 수강
    if (l > p) {
      best.push_back(1);
    } else {
      sort(v.begin(), v.end(), greater<int>());
      int temp = v[l - 1];
      //마지막으로 듣게 되는 사람만큼 사용해야함
      best.push_back(temp);
    }
  }
  sort(best.begin(), best.end());
  int idx = 0;
  while (m > 0 && idx < n) {
    m -= best[idx];
    if (m < 0) {
      break;
    }
    idx++;
  }
  cout << idx;
  return 0;
}
