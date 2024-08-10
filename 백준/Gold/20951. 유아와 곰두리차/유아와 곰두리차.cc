#include <bits/stdc++.h>
using namespace std;

vector<int> v[100005];
long long dp[100005][7];
long long rec(int now, int len) {
  if (len == 7) {
    return 1;
  }
  if (dp[now][len] != -1) {
    return dp[now][len];
  }
  dp[now][len] = 0;
  for (auto a : v[now]) {
    dp[now][len] += rec(a, len + 1) % 1000000007;
  }
  return dp[now][len] % 1000000007;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i < m; i++) {
    int s, e;
    cin >> s >> e;
    v[s].push_back(e);
    v[e].push_back(s);
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += (rec(i, 0) % 1000000007);
    ans %= 1000000007;
  }
  cout << ans;
  return 0;
}