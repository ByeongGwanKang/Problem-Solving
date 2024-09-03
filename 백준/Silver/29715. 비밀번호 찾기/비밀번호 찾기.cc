#include <bits/stdc++.h>
using namespace std;

int nPm(int n, int m) {
  int answer = 1;
  for (int i = 0; i < m; ++i) {
    answer *= n;
    n -= 1;
  }
  return answer;
}

int cal_time(int p, int it, int wt) {
  if (p % 3) {
    return (p * it) + (p / 3 * wt);
  } else {
    return (p * it) + ((p / 3 - 1) * wt);
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int pw_length, remember;
  cin >> pw_length >> remember;
  int pw_input_time, wrong_time;
  cin >> pw_input_time >> wrong_time;
  vector<int> cards;
  for (int i = 1; i <= 9; ++i) {
    cards.push_back(i);
  }
  if (remember == 0) {
    int possible = nPm(cards.size(), pw_length);
    cout << cal_time(possible, pw_input_time, wrong_time);
  } else {
    vector<int> need_num;
    for (int i = 0; i < remember; ++i) {
      int isNotZero, num;
      cin >> isNotZero >> num;
      if (isNotZero) {
        cards.erase(remove(cards.begin(), cards.end(), num), cards.end());
        pw_length--;
      } else {
        cards.erase(remove(cards.begin(), cards.end(), num), cards.end());
        need_num.push_back(num);
      }
    }
    if (need_num.empty()) {
      int possible = nPm(cards.size(), pw_length);
      cout << cal_time(possible, pw_input_time, wrong_time);
    } else {
      int condition_1 = nPm(pw_length, need_num.size());
      int condition_2 = nPm(cards.size(), pw_length - need_num.size());
      int possible = condition_1 * condition_2;

      cout << cal_time(possible, pw_input_time, wrong_time);
    }
  }
  return 0;
}