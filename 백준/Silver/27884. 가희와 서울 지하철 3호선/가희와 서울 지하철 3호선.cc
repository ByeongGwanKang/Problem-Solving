#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;

int mxLen(const vector<int> &stations) {
  int max_length = 0;
  int current_length = 1;
  for (int i = 1; i < stations.size(); ++i) {
    if (stations[i] != stations[i - 1]) {
      current_length++;
    } else {
      max_length = max(max_length, current_length);
      current_length = 1;
    }
  }
  max_length = max(max_length, current_length);
  return max_length;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  ll total_count = 0;
  for (int i = 0; i < (1 << n); ++i) {
    vector<int> stations(n);
    for (int j = 0; j < n; ++j) {
      stations[j] = (i & (1 << j)) ? 1 : 0;
    }
    if (mxLen(stations) == m) {
      ll tmp = 1;
      for (int j = 0; j < n; j++) {
        if (stations[j] == 1) {
          tmp *= 5;
        }
        if (stations[j] == 0) {
          tmp *= 11;
        }
        tmp %= MOD;
      }
      total_count += tmp;
    }
  }
  cout << total_count % MOD;
  return 0;
}