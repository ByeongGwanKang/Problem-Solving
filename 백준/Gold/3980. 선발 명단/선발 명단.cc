#include <bits/stdc++.h>
using namespace std;

int arr[11][11];
bool able[11];
int sum = 0;
vector<int> ans;
void BT(int n) {
  if (n == 11) {
    ans.push_back(sum);
    return;
  }
  for (int i = 0; i < 11; i++) {
    if (arr[n][i] != 0 && able[i] == false) {
      able[i] = true;
      sum += arr[n][i];
      BT(n + 1);
      able[i] = false;
      sum -= arr[n][i];
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    ans.clear();
    memset(arr, 0, sizeof(arr));
    memset(able, 0, sizeof(able));
    for (int i = 0; i < 11; i++) {
      for (int j = 0; j < 11; j++) {
        cin >> arr[i][j];
      }
    }
    BT(0);
    int mx = 0;
    for (auto a : ans) {
      mx = max(mx, a);
    }
    cout << mx << "\n";
  }
  return 0;
}