#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<string> name;
  vector<pair<int, int>> res;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    name.push_back(s);
    res.push_back({0, i});
  }
  vector<queue<int>> vote(1001);
  int idx = 0;
  int tmp;
  while (cin >> tmp) {
    tmp--;
    vote[idx].push(tmp);
    for (int i = 1; i < n; i++) {
      cin >> tmp;
      tmp--;
      vote[idx].push(tmp);
    }
    idx++;
  }
  while (true) {
    for (int i = 0; i < idx; i++) {
      while (!vote[i].empty() && res[vote[i].front()].first == -1) {
        vote[i].pop();
      }
      res[vote[i].front()].first++;
    }
    int mx = 0, mn = 123456789;
    for (int i = 0; i < n; i++) {
      if (res[i].first > mx) {
        mx = res[i].first;
      }
      if (res[i].first < mn && res[i].first != -1) {
        mn = res[i].first;
      }
    }
    if (mx * 2 > idx || mx == mn) {
      for (int i = 0; i < n; i++) {
        if (res[i].first == mx) {
          cout << name[res[i].second] << "\n";
        }
      }
      return 0;
    }
    for (int i = 0; i < n; i++) {
      if (res[i].first == mn) {
        res[i].first = -1;
      }
      if (res[i].first == -1) {
        continue;
      }
      res[i].first = 0;
    }
  }
  return 0;
}