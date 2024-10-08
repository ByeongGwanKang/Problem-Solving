#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll a, b, c;
  cin >> a >> b >> c;
  map<string, ll> common;
  map<string, ll> sp;
  set<string> service;
  for (int i = 0; i < a; i++) {
    string s;
    ll cost;
    cin >> s >> cost;
    common.insert({s, cost});
  }
  for (int i = 0; i < b; i++) {
    string s;
    ll cost;
    cin >> s >> cost;
    sp.insert({s, cost});
  }
  for (int i = 0; i < c; i++) {
    string s;
    cin >> s;
    service.insert(s);
  }
  ll n;
  cin >> n;
  ll sum_cm = 0;
  ll sum_all = 0;
  ll cnt = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (common.find(s) != common.end()) {
      sum_cm += common[s];
    }
    if (sp.find(s) != sp.end()) {
      sum_all += sp[s];
    }
    if (service.find(s) != service.end()) {
      cnt++;
    }
  }
  if (sum_all + sum_cm < 50000 && cnt != 0) {
    cout << "No";
  } else if (sum_all != 0 && sum_cm < 20000) {
    cout << "No";
  } else if (cnt > 1) {
    cout << "No";
  } else {
    cout << "Okay";
  }
  return 0;
}