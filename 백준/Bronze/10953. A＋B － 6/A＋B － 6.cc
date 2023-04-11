#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int sum = 0;
	int a = 0, b = 0;
	char c;
	for (int i = 0; i < t; i++) {
		sum = 0;
		cin >> a >>c >> b;
		sum = a + b;
		cout << sum << "\n";
	}
	return 0;
}