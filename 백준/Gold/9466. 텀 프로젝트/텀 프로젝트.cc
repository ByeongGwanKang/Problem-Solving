#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int vis[100001];
int n;
void search(int start) {
  int now = start;
  while (true) {
    vis[now] = start;
    now = arr[now];
    //이번 방문에서 방문한 경우
    if (vis[now] == start) {
      while (vis[now] != -1) {
        vis[now] = -1;
        now = arr[now];
      }
      return;
    }
    //이전 방문에서 방문한 경우
    else if (vis[now] != 0) {
      return;
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
    cin >> n;
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
      if (vis[i] == 0) {
        search(i);
      }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
      if (vis[i] != -1) {
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}