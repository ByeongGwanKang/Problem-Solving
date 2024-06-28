#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<string> v[26];
  vector<int> idx(26, 0);
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v[s[0] - 'a'].push_back(s);
  }
  for (int i = 0; i < 26; i++) {
    sort(v[i].begin(), v[i].end());
  }
  for (int i = 0; i < k; i++) {
    char c;
    cin >> c;
    int now = c - 'a';
    cout << v[now][idx[now]] << "\n";
    idx[now]++;
    if (idx[now] == v[now].size())
      idx[now] = 0;
  }
  return 0;
}