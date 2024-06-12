#include <bits/stdc++.h>
using namespace std;

vector<short> v;
string s;
long long fee;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  v.reserve(n);
  long long j_fee;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> s >> fee;
    if (fee > 1000) {
      cnt++;
    } else {
      v.push_back(fee);
    }
    if (s == "jinju") {
      j_fee = fee;
    }
  }
  sort(v.begin(), v.end());

  cout << j_fee << "\n"
       << v.size() - (upper_bound(v.begin(), v.end(), j_fee) - v.begin()) + cnt;
  return 0;
}