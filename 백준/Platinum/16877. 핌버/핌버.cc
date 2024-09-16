#include <bits/stdc++.h>
using namespace std;

int fibo[32];
int g[3000001];
vector<bool> vis(32);
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  fibo[0] = 1;
  fibo[1] = 2;
  for (int i = 2; i < 32; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
  for (int i = 1; i <= 3000000; i++) {
    vis.assign(32, false);
    for (int f : fibo) {
      int now = i - f;
      if (now < 0) {
        break;
      }
      vis[g[now]] = true;
    }
    for (int j = 0; j < 32; j++) {
      if (vis[j] == false) {
        g[i] = j;
        break;
      }
    }
  }
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int rock;
    cin >> rock;
    ans ^= g[rock];
  }
  cout << (ans ? "koosaga" : "cubelover");
  return 0;
}