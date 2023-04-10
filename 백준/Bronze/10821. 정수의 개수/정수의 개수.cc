#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	int cnt=1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}