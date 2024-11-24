#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, q;
  cin >> n >> q;
  vector<pair<ll, ll>> v(n);
  vector<ll> tmp(n);
  vector<ll> aixi(n + 1);
  vector<ll> ai(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> v[i].second >> v[i].first;
    tmp[i] = v[i].first;
  }
  sort(v.begin(), v.end());
  sort(tmp.begin(), tmp.end());
  aixi[0] = 0;
  ai[0] = 0;
  for (int i = 1; i <= n; i++) {
    ai[i] = ai[i - 1] + v[i - 1].second;
    aixi[i] = aixi[i - 1] + v[i - 1].first * v[i - 1].second;
  }
  for (int i = 0; i < q; i++) {
    ll now;
    cin >> now;
    ll idx = lower_bound(tmp.begin(), tmp.end(), now) - tmp.begin();
    cout << aixi[n] - 2 * aixi[idx] - now * (ai[n] - 2 * ai[idx]) << "\n";
  }
  return 0;
}