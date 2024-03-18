#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    multiset<int> ms;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
      char order;
      cin >> order;
      if (order == 'I') {
        int val;
        cin >> val;
        ms.insert(val);
      } else {
        int flag;
        cin >> flag;
        if (!ms.empty()) {
          if (flag == 1) {
            ms.erase(--ms.end());
          } else {
            ms.erase(ms.begin());
          }
        }
      }
    }
    if (ms.empty()) {
      cout << "EMPTY\n";
    } else {
      cout << *(--ms.end()) << " " << *ms.begin() << "\n";
    }
  }
  return 0;
}
