#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  getline(cin, s);
  int n;
  cin >> n;
  set<string> see;
  set<string> house;
  string tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    house.insert(tmp);
  }
  house.insert("swi");
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> tmp;
    see.insert(tmp);
  }
  // 1번 규칙 - 동호가 집에 존재
  if (house.count("dongho") == 1) {
    cout << "dongho";
    return 0;
  }
  // 2번 규칙 - 집에 존재, 목격담 미존재
  map<string, int> chk;
  for (auto iter = house.begin(); iter != house.end(); iter++) {
    if (see.count(*iter) == 0) {
      chk.insert({*iter, 1});
    }
  }
  if (chk.size() == 1) {
    cout << chk.begin()->first;
    return 0;
  }
  // 3번 규칙 - bumin집에 존재, 목격담 미존재
  if (house.count("bumin") == 1 && see.count("bumin") == 0) {
    cout << "bumin";
    return 0;
  }
  // 4번 규칙 - cake집에 존재, 목격담 미존재
  if (house.count("cake") == 1 && see.count("cake") == 0) {
    cout << "cake";
    return 0;
  }
  // 5번 규칙 - lawyer집에 존재, 목격담 미존재
  if (house.count("lawyer") == 1 && see.count("lawyer") == 0) {
    cout << "lawyer";
    return 0;
  }
  // 6번 규칙 - 집 중 정렬
  for (auto iter = house.begin(); iter != house.end(); iter++) {
    if (*iter == "swi") {
      continue;
    }
    if (see.count(*iter) == 1) {
      continue;
    }
    cout << *iter;
    return 0;
  }
  return 0;
}