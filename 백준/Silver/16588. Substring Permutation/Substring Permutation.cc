#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a, b;
  cin >> a >> b;
  vector<int> v(26);
  for (int i = 0; i < a.length(); i++) {
    v[a[i] - 'a']++;
  }
  for (int i = 0; i < b.length(); i++) {
    v[b[i] - 'a']--;
  }
  for (int i = 0; i < 26; i++) {
    if (v[i] < 0) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}