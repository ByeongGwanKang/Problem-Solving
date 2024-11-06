#include <bits/stdc++.h>
using namespace std;

const int MAX = 1'000'000;
bool isPrime[MAX + 1];
int total[MAX + 1];
vector<int> ps;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  memset(isPrime, true, sizeof(isPrime));
  for (int i = 2; i <= MAX; i++) {
    if (!isPrime[i]) {
      continue;
    }
    for (int j = i * 2; j <= MAX; j += i) {
      isPrime[j] = false;
    }
  }
  for (int i = 2; i <= MAX; i++) {
    if (isPrime[i]) {
      ps.push_back(i);
    }
  }
  int n;
  cin >> n;
  vector<vector<int>> v(
      n, vector<int>(ps.size(), 0)); // i번째 수가 j라는 소수를 몇개 사용하는지
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    for (int j = 0; j < ps.size(); j++) {
      if (val == 1)
        break;
      while (val % ps[j] == 0) {
        val /= ps[j];
        v[i][j]++;      //해당 번호 사용량
        total[ps[j]]++; //전체 사용량
      }
    }
  }
  int gcd = 1;
  int cnt = 0;
  for (int i = 0; i < ps.size(); i++) {
    int avg = total[ps[i]] / n; //각 수당 소수 분배
    for (int j = 0; j < n; j++) {
      if (v[j][i] < avg) {
        cnt += avg - v[j][i];
      }
    }
    gcd *= pow(ps[i], avg);
  }
  cout << gcd << " " << cnt;
  return 0;
}