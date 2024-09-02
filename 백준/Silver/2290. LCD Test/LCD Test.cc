#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int s;
  string n;
  cin >> s >> n;
  for (int i = 0; i < 2 * s + 3; i++) {
    for (int j = 0; j < n.length(); j++) {
      if (n[j] == '1') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            cout << ' ';
          } else if (k == s + 1) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '2') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1 && i <= s) {
            cout << '|';
          } else if (k == 0 && i > s + 1) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '3') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '4') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (i == 0 || i == 2 * s + 2) {
              cout << ' ';
            } else if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1) {
            cout << '|';
          } else if (k == 0 && i <= s) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '5') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1 && i > s + 1) {
            cout << '|';
          } else if (k == 0 && i <= s) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '6') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == 0) {
            cout << '|';
          } else if (k == s + 1 && i > s + 1) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '7') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (i == s + 1 || i == 2 * s + 2) {
              cout << ' ';
            } else if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1) {
            cout << '|';

          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '8') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1) {
            cout << '|';
          } else if (k == 0) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '9') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1) {
            cout << '|';
          } else if (k == 0 && i <= s) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      if (n[j] == '0') {
        for (int k = 0; k < s + 2; k++) {
          if (i % (s + 1) == 0) {
            if (i == s + 1) {
              cout << ' ';
            } else if (k > 0 && k < s + 1) {
              cout << '-';
            } else {
              cout << ' ';
            }
          } else if (k == s + 1) {
            cout << '|';
          } else if (k == 0) {
            cout << '|';
          } else {
            cout << " ";
          }
        }
      }
      cout << " ";
    }
    cout << "\n";
  }
  return 0;
}