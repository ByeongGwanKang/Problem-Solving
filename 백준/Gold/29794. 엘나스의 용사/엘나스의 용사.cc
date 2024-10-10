#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> mon(m+1);
  vector<ll> lev(201, 0); //각 캐릭터가 레벨을 올리며 겹치는 횟수
  vector<ll> dist(201, 0); // i레벨에 가야하는 층
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    for (int j = 0; j < k; j++) {
      if (s + j >= 200) {
        break;
      }
      lev[s + j]++;
    }
  }
  for (int i = 1; i <= m; i++) {
    cin >> mon[i];
  }
  for (int i = 1; i < 200; i++) {
    int mx = -1;
    int mxidx = -1;
    for (int j = 1; j <= m; j++) {
      if (i < mon[j]) {
        continue;
      }
      if (mx < mon[j]) {
        mx = mon[j];
        mxidx = j;
      }
    }
    dist[i] = mxidx;
  }
  ll without = 0;
  int A = 1, B = 2;
  for (int i = 1; i < 200; i++) {
    without += lev[i] * (dist[i] - 1);
  }
  ll with = without;
  ll tmp;
  for (int i = 1; i <= m; i++) {
    for (int j = i + 1; j <= m; j++) {
      tmp = 0;
      for (int l = 1; l < 200; l++) {
        tmp += lev[l] * min(dist[l] - 1, (i - 1) + abs(j - dist[l]));
      }
      if (with > tmp) {
        with = tmp;
        A = i;
        B = j;
      }
    }
  }
  cout << A << " " << B << "\n" << without - with;
  return 0;
}