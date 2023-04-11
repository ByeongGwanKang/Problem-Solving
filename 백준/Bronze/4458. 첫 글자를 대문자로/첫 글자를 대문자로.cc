#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	string str;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		getline(cin, str);
		str[0] = toupper(str[0]);
		cout << str << "\n";
	}


		return 0;
	}