#include <bits/stdc++.h>
using namespace std;

int arr[2001];
bool dp[2001][2001];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  //길이 1 팰린드롬
  for (int i = 1; i <= n; i++) {
    dp[i][i] = true;
  }
  //두 수 같은 길이 2 팰린드롬
  for (int i = 1; i < n; i++) {
    if (arr[i] == arr[i + 1]) {
      dp[i][i + 1] = true;
    }
  }
  //i는 부분수열의 길이 j는 시작인덱스
  for (int i = 2; i < n; i++) {
    for (int j = 1; j <= n; j++) {
      if (arr[j] == arr[j + i] && dp[j + 1][j + i - 1] == true) {
        dp[j][j + i] = true;
      }
    }
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int s, e;
    cin >> s >> e;
    if (dp[s][e]) {
      cout << "1\n";
    } else {
      cout << "0\n";
    }
  }
  return 0;
}