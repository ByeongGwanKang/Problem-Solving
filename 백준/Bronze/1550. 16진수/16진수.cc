#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	char str[101];
	cin >> str;
	int val = (int)strtol(str, NULL, 16);
	cout << val;


	return 0;
}