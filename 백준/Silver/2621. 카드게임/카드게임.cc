#include <bits/stdc++.h>
using namespace std;

char color[5];
int num[5];
int col_arr[4];
int num_arr[10];
int seq[5];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 0; i < 5; i++) {
    cin >> color[i] >> num[i];
    seq[i] = num[i];
    num_arr[num[i]]++;
    if (color[i] == 'R') {
      col_arr[0]++;
    }
    if (color[i] == 'B') {
      col_arr[1]++;
    }
    if (color[i] == 'Y') {
      col_arr[2]++;
    }
    if (color[i] == 'G') {
      col_arr[3]++;
    }
  }
  sort(begin(seq), end(seq));
  bool straight = true;
  for (int i = 1; i < 5; i++) {
    if (seq[i] != seq[i - 1] + 1) {
      straight = false;
      break;
    }
  }
  // 1번조건
  if (*max_element(col_arr, col_arr + 4) == 5) {
    if (straight) {
      cout << *max_element(num, num + 5) + 900;
      return 0;
    }
  }
  // 2번조건
  if (*max_element(num_arr, num_arr + 10) == 4) {
    for (int i = 1; i <= 9; i++) {
      if (num_arr[i] == 4) {
        cout << i + 800;
        return 0;
      }
    }
  }
  // 3번조건
  if (*max_element(num_arr, num_arr + 10) == 3) {
    for (int i = 1; i <= 9; i++) {
      if (num_arr[i] == 2) {
        for (int j = 1; j <= 9; j++) {
          if (num_arr[j] == 3) {
            cout << j * 10 + i + 700;
            return 0;
          }
        }
      }
    }
  }
  // 4번조건
  if (*max_element(col_arr, col_arr + 4) == 5) {
    cout << seq[4] + 600;
    return 0;
  }
  // 5번조건
  if (straight) {
    cout << seq[4] + 500;
    return 0;
  }
  // 6번조건
  if (*max_element(num_arr, num_arr + 10) == 3) {
    for (int i = 1; i <= 9; i++) {
      if (num_arr[i] == 3) {
        cout << i + 400;
        return 0;
      }
    }
  }
  // 7번조건
  if (*max_element(num_arr, num_arr + 10) == 2) {
    int cnt = 0;
    vector<int> tmp;
    for (int i = 1; i <= 9; i++) {
      if (num_arr[i] == 2) {
        cnt++;
        tmp.push_back(i);
      }
    }
    if (cnt == 2) {
      cout << max(tmp[0], tmp[1]) * 10 + min(tmp[0], tmp[1]) + 300;
      return 0;
    }
  }
  // 8번조건
  if (*max_element(num_arr, num_arr + 10) == 2) {
    for (int i = 1; i <= 9; i++) {
      if (num_arr[i] == 2) {
        cout << i + 200;
        return 0;
      }
    }
  }
  cout << seq[4] + 100;
  return 0;
}