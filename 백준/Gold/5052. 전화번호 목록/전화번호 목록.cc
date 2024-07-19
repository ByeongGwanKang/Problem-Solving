#include <bits/stdc++.h>
using namespace std;

const int ROOT = 1;
int unused = 2;
const int MX = 10000 * 10 + 5;
bool chk[MX];
int nxt[MX][10];
bool flg;
int c2i(char c) { return c - '0'; }
void insert(string s) {
  int cur = ROOT;
  for (auto a : s) {
    if (nxt[cur][c2i(a)] == -1) {
      nxt[cur][c2i(a)] = unused++;
    }
    cur = nxt[cur][c2i(a)];
    if (chk[cur] == true) {
      flg = true;
    }
  }
  chk[cur] = true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    //초기화
    for (int i = 0; i < MX; i++) {
      fill(nxt[i], nxt[i] + 10, -1);
      chk[i] = false;
    }
    unused = 2;
    flg = false;
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
      insert(v[i]);
    }
    if (flg) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}