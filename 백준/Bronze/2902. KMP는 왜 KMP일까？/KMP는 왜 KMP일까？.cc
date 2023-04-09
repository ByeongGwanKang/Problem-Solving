#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
#include <bitset>
using namespace std;

int main(void) {
	string str;

	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if ((int)str[i] >= 65 && (int)str[i] <= 90)
			cout << str[i];
	}
	return 0;
}