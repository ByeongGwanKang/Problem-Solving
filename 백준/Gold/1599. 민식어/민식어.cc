#include <bits/stdc++.h>
using namespace std;

map<string, string> m = {{"a", "a"}, {"b", "b"}, {"k", "c"}, {"d", "d"},
                         {"e", "e"}, {"g", "f"}, {"h", "g"}, {"i", "h"},
                         {"l", "i"}, {"m", "j"}, {"n", "k"}, {"ng", "l"},
                         {"o", "m"}, {"p", "n"}, {"r", "o"}, {"s", "p"},
                         {"t", "q"}, {"u", "r"}, {"w", "s"}, {"y", "t"}};
bool cmp(pair<string, string> a, pair<string, string> b) {
  return a.second < b.second;
}
vector<pair<string, string>> v;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    string alp = "";
    for (int i = 0; i < s.size(); i++) {
      if (i + 1 < s.size() && s[i] == 'n' && s[i + 1] == 'g') {
        alp += 'l';
        i++;
      } else {
        string tmp = "";
        tmp += s[i];
        alp += m.find(tmp)->second;
      }
    }
    v.push_back({s, alp});
  }
  sort(v.begin(), v.end(), cmp);
  for (auto a : v) {
    cout << a.first << "\n";
  }
  return 0;
}