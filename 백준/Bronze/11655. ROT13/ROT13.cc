#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if ((int)str[i] >= 65 && (int)str[i] <= 77||
			(int)str[i] >= 97 && (int)str[i] <= 109) {
			str[i] = str[i] + 13;
		}
		else if ((int)str[i] >= 78 && (int)str[i] <= 90 ||
			(int)str[i] >= 110 && (int)str[i] <= 122) {
			str[i] = str[i] - 13;
		}

	}
	cout << str;
	return 0;
}