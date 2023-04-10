#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	int cnt = 0;
	int len = str.size();
	for (int i = 0; i < len; i++) {
		if (str[i] == 'a' || str[i] == 'e' ||
			str[i] == 'i' || str[i] == 'o' ||
			str[i] == 'u')
			cnt++;
	}
	cout << cnt;
	return 0;
}