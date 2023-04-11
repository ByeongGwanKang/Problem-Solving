#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
		if (i % 10 == 9)
			cout << "\n";
	}
		return 0;
	}