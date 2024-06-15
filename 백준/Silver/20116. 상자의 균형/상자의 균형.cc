#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n, l;
  cin >> n >> l;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  reverse(v.begin(), v.end());
  vector<ll> sum(n);
  sum[0] = v[0];
  for (int i = 1; i < n; i++) {
    sum[i] = sum[i - 1] + v[i];
  }
  for (int i = 1; i < n; i++) {
    ll upper = v[i] + l;
    ll lower = v[i] - l;
    double avg = (double)sum[i - 1] / i;
    if (avg >= upper || avg <= lower) {
      cout << "unstable";
      return 0;
    }
  }
  cout << "stable";
  return 0;
}