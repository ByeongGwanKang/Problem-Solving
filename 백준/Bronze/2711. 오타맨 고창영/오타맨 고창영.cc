#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int t,n;
	cin >> t;
	string str;
	for (int i = 0; i < t; i++) {
		cin >> n >> str;
		for (int j = 0; j < n - 1; j++) {
			cout << str[j];
		}
		for (int j = n; j < str.size(); j++) {
			cout << str[j];
		}
		cout << "\n";
	}

	return 0;
}
