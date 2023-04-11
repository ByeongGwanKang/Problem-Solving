#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <set>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			str[j] = tolower(str[j]);
		}
		cout << str << "\n";
	}
	return 0;
}