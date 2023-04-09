#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;

	while (true) {
		getline(cin, str);
		if (str == "END")
			return 0;
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
	return 0;
}