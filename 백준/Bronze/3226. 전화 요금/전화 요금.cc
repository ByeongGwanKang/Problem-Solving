#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int sum = 0;
  while (n--) {
    string time;
    int d;
    cin >> time >> d;
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    while (d--) {
      if (h >= 7 && h < 19) {
        sum += 10;
        m++;
        if (m == 60) {
          m = 0;
          h++;
        }
      } else {
        sum += 5;
        m++;
        if (m == 60) {
          m = 0;
          h++;
        }
      }
    }
  }
  cout << sum;
  return 0;
}