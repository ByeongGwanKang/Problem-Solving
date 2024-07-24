#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string king, stone;
  int n;
  cin >> king >> stone >> n;
  int kx = king[0] - 'A';
  int ky = king[1] - '1';
  int sx = stone[0] - 'A';
  int sy = stone[1] - '1';
  for (int i = 0; i < n; i++) {
    string order;
    cin >> order;
    if (order == "R") {
      kx++;
      if (kx >= 8) {
        kx--;
      }
      if (kx == sx && ky == sy) {
        sx++;
        if (sx >= 8) {
          sx--;
          kx--;
        }
      }
    }
    if (order == "L") {
      kx--;
      if (kx < 0) {
        kx++;
      }
      if (kx == sx && ky == sy) {
        sx--;
        if (sx < 0) {
          sx++;
          kx++;
        }
      }
    }
    if (order == "B") {
      ky--;
      if (ky < 0) {
        ky++;
      }
      if (kx == sx && ky == sy) {
        sy--;
        if (sy < 0) {
          sy++;
          ky++;
        }
      }
    }
    if (order == "T") {
      ky++;
      if (ky >= 8) {
        ky--;
      }
      if (kx == sx && ky == sy) {
        sy++;
        if (sy >= 8) {
          sy--;
          ky--;
        }
      }
    }
    if (order == "RT") {
      kx++;
      ky++;
      if (kx >= 8 || ky >= 8) {
        kx--;
        ky--;
      }
      if (kx == sx && ky == sy) {
        sx++;
        sy++;
        if (sx >= 8 || sy >= 8) {
          sx--;
          sy--;
          kx--;
          ky--;
        }
      }
    }
    if (order == "LT") {
      kx--;
      ky++;
      if (kx < 0 || ky >= 8) {
        kx++;
        ky--;
      }
      if (kx == sx && ky == sy) {
        sx--;
        sy++;
        if (sx < 0 || sy >= 8) {
          sx++;
          sy--;
          kx++;
          ky--;
        }
      }
    }
    if (order == "RB") {
      kx++;
      ky--;
      if (kx >= 8 || ky < 0) {
        kx--;
        ky++;
      }
      if (kx == sx && ky == sy) {
        sx++;
        sy--;
        if (sx >= 8 || sy < 0) {
          sx--;
          sy++;
          kx--;
          ky++;
        }
      }
    }
    if (order == "LB") {
      kx--;
      ky--;
      if (kx < 0 || ky < 0) {
        kx++;
        ky++;
      }
      if (kx == sx && ky == sy) {
        sx--;
        sy--;
        if (sx < 0 || sy < 0) {
          sx++;
          sy++;
          kx++;
          ky++;
        }
      }
    }
  }
  cout << char(kx + 'A') << ky + 1 << "\n";
  cout << char(sx + 'A') << sy + 1 << "\n";
  return 0;
}