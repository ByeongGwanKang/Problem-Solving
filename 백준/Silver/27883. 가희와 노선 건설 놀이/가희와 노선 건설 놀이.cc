#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  vector<string> ans;
  int high = 1;
  string init = "U 1 -10000";
  ans.push_back(init);
  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    string s = "U ";
    s += to_string(tmp + 1);
    s += " ";
    s += to_string(high);
    v[tmp] = high++;
    ans.push_back(s);
    ans.push_back("P");
  }
  cout << ans.size() << "\n";
  for (auto a : ans) {
    cout << a << "\n";
  }
  return 0;
}