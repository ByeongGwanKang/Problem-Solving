#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "Algorithm") {
      cout << "204\n";
    }
    if (s == "DataAnalysis") {
      cout << "207\n";
    }
    if (s == "ArtificialIntelligence") {
      cout << "302\n";
    }
    if (s == "CyberSecurity") {
      cout << "B101\n";
    }
    if (s == "Network") {
      cout << "303\n";
    }
    if (s == "Startup") {
      cout << "501\n";
    }
    if (s == "TestStrategy") {
      cout << "105\n";
    }
  }
  return 0;
}