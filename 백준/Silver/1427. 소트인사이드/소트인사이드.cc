#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	int n = str.size();
	sort(str.begin(), str.end(), greater<int>());
	cout << str;


	return 0;
}