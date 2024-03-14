#include <bits/stdc++.h>
using namespace std;

struct point {
  long long x;
  long long y;
  bool operator<(const point &a) { return x == a.x ? y < a.y : x < a.x; }
};
//반시계면 양수
long long ccw(const point &a, const point &b, const point &c) {
  return (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y);
}

point p[100001];
int s[100001];
int top = 0;

//x좌표가 같다면 y내림차순
//y좌표가 같다면 x오름차순
//아니라면 y내림차숝
bool cmp(const point &a, const point &b) {
  long long c = ccw(p[0], a, b);
  if (c == 0) {
    if (a.x == b.x)
      return a.y > b.y;
    else {
      if (a.y == b.y)
        return a.x < b.x;
      else {
        return a.y > b.y;
      }
    }
  }
  return c > 0;
}

void push(int n) { s[top++] = n; }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int iter = 0;
  while (n--) {
    int x, y;
    char c;
    cin >> x >> y >> c;
    if (c == 'Y') {
      p[iter].x = x;
      p[iter].y = y;
      iter++;
    }
  }
  // x죄표 후,y좌표가 작은 순으로 정렬 후 반시계방향으로 정렬
  sort(p, p + iter);
  sort(p + 1, p + iter, cmp);
  cout << iter << "\n";
  for (int i = 0; i < iter; i++) {
    cout << p[i].x << " " << p[i].y << "\n";
  }
  return 0;
}
