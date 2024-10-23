#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int r, c;
  cin >> r >> c;
  vector<pair<int, int>> score(9);
  for (int i = 1; i <= r; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < c; j++) {
      if (s[j] >= '1' && s[j] <= '9') {
        int team = s[j] - '1';
        score[team] = {j, team};
        break;
      }
    }
  }
  sort(score.begin(), score.end(), greater<pair<int, int>>());
  vector<int> ans(9);
  int rank = 1;
  ans[score[0].second] = 1;
  for (int i = 1; i < 9; i++) {
    if (score[i].first == score[i - 1].first) {
      ans[score[i].second] = rank;
    } else {
      rank++;
      ans[score[i].second] = rank;
    }
  }
  for (int i = 0; i < 9; i++) {
    cout << ans[i] << "\n";
  }
  return 0;
}