#include <bits/stdc++.h>
using namespace std;

vector<bool> vis(10000);

int a, b;
queue<pair<int, string>> q;
void bfs() {
  while (!q.empty()) {
    int now = q.front().first;
    string op = q.front().second;
    q.pop();
    if (now == b) {
      cout << op << "\n";
      break;
    }
    // 1번연산
    int one = now * 2;
    if (one > 9999) {
      one %= 10000;
    }
    if (vis[one] == false) {
      vis[one] = true;
      q.push({one, op + 'D'});
    }
    // 2번연산
    int two = now - 1;
    if (two == -1) {
      two = 9999;
    }
    if (vis[two] == false) {
      vis[two] = true;
      q.push({two, op + 'S'});
    }
    // 3번연산
    int three = now;
    if (three <= 999) {
      three *= 10;
    } else {
      int temp = three / 1000;
      three = (three - (temp * 1000)) * 10 + temp;
    }
    if (vis[three] == false) {
      vis[three] = true;
      q.push({three, op + 'L'});
    }
    // 4번연산
    int four = now;
    if (four % 10 == 0) {
      four /= 10;
    } else {
      int temp = four % 10;
      four = (four / 10) + temp * 1000;
    }
    if (vis[four] == false) {
      vis[four] = true;
      q.push({four, op + 'R'});
    }
  }
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    fill(vis.begin(), vis.end(), false);
    cin >> a >> b;
    q.push({a, ""});
    vis[a] = true;
    bfs();
    while (!q.empty()) {
      q.pop();
    }
  }
  return 0;
}
