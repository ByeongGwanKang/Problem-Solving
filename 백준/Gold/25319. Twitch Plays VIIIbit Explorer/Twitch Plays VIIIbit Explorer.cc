#include <bits/stdc++.h>
using namespace std;

char arr[50][50];
int check[26];
int id_check[26];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, s;
  cin >> n >> m >> s;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      check[arr[i][j] - 'a']++;
    }
  }
  string id;
  cin >> id;
  for (auto a : id) {
    id_check[a - 'a']++;
  }
  int c = 1e9;
  for (int i = 0; i < id.length(); i++) {
    c = min(c, check[id[i] - 'a'] / id_check[id[i] - 'a']);
  }
  int cnt = c;
  int nowx = 0;
  int nowy = 0;
  string ans = "";
  bool flag = false;
  while (cnt > 0) {
    for (int i = 0; i < id.length(); i++) {
      flag = false;
      for (int j = 0; j < n && !flag; j++) {
        for (int k = 0; k < m && !flag; k++) {
          if (arr[j][k] == id[i]) {
            while (nowx < j) {
              ans += 'D';
              nowx++;
            }
            while (nowx > j) {
              ans += 'U';
              nowx--;
            }
            while (nowy < k) {
              ans += 'R';
              nowy++;
            }
            while (nowy > k) {
              ans += 'L';
              nowy--;
            }
            ans += 'P';
            arr[j][k] = '.';
            flag = true;
          }
        }
      }
    }
    cnt--;
  }
  while (nowx < n - 1) {
    ans += 'D';
    nowx++;
  }
  while (nowy < m - 1) {
    ans += 'R';
    nowy++;
  }
  cout << c << " " << ans.length() << "\n" << ans;
  return 0;
}