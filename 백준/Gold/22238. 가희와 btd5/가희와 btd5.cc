#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  int balloon_x = -1;
  int balloon_y = -1;
  vector<int> health(n);
  bool x_zero = false;
  bool y_zero = false;
  bool x_plus = false;
  bool y_plus = false;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (i == 0) {
      if (x > 0) {
        x_plus = true;
      }
      if (y > 0) {
        y_plus = true;
      }
      if (x == 0) {
        x_zero = true;
      } else if (y == 0) {
        y_zero = true;
      } else {
        int g = gcd(abs(x), abs(y));
        balloon_x = x / g;
        balloon_y = y / g;
      }
    }
    cin >> health[i];
  }
  sort(health.begin(), health.end());
  long long dmg_sum = 0;
  for (int i = 0; i < m; i++) {
    int x, y, d;
    cin >> x >> y >> d;
    bool do_damage = false;
    if (x == 0 && x_zero) {
      if (y > 0 && y_plus) {
        do_damage = true;
      } else if (y < 0 && !y_plus) {
        do_damage = true;
      }
    }
    if (y == 0 && y_zero) {
      if (x > 0 && x_plus) {
        do_damage = true;
      } else if (x < 0 && !x_plus) {
        do_damage = true;
      }
    }
    int g = gcd(abs(x), abs(y));
    if (x / g == balloon_x && y / g == balloon_y) {
      do_damage = true;
    }
    if (do_damage) {
      dmg_sum += d;
    }
    cout << n - int(upper_bound(health.begin(), health.end(), dmg_sum) -
                    health.begin())
         << "\n";
  }
  return 0;
}