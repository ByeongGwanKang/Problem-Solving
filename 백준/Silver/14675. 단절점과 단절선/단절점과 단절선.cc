#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    int s, e;
    cin >> s >> e;
    adj[s].push_back(e);
    adj[e].push_back(s);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int t, k;
    cin >> t >> k;
    if (t == 2) {
      cout << "yes\n";
    } else {
      if (adj[k].size() > 1) {
        cout << "yes\n";
      } else {
        cout << "no\n";
      }
    }
  }
  return 0;
}