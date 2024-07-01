#include <bits/stdc++.h>
using namespace std;

bool vis[51];
int mxnum;
string s;
vector<int> ans;
void recursive(int n) {
  if (n == s.length()) {
    for (auto a : ans) {
      cout << a << " ";
    }
    exit(0);
  }
  string tmp = "";
  int num;
  for (int i = n; i <= n + 1; i++) {
    tmp += s[i];
    num = stoi(tmp);
    if (num > mxnum) {
      continue;
    }
    if (vis[num] == true) {
      continue;
    }
    vis[num] = true;
    ans.push_back(num);
    recursive(i + 1);
    vis[num] = false;
    ans.pop_back();
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> s;
  if (s.length() < 10) {
    mxnum = s.length();
  } else {
    mxnum = 9 + (s.length() - 9) / 2;
  }
  recursive(0);
  return 0;
}