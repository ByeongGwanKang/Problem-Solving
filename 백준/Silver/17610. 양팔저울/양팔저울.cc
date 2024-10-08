#include <bits/stdc++.h>
using namespace std;

int arr[14];
int s = 0;
int k;
vector<bool> ans;
void DFS(int idx, int sum) {
  if (idx == k) {
    if (sum >= 0) {
      ans[sum] = true;
    }
    return;
  }
  DFS(idx + 1, sum);
  DFS(idx + 1, sum + arr[idx]);
  DFS(idx + 1, sum - arr[idx]);
  return;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> k;
  for (int i = 0; i < k; i++) {
    cin >> arr[i];
    s += arr[i];
  }
  ans.resize(s + 1, false);
  DFS(0, 0);
  int cnt = 0;
  for (int i = 1; i <= s; i++) {
    if (ans[i] == false) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}