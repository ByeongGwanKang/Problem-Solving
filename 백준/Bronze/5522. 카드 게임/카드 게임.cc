#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int sum = 0;
	int n;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += n;
	}

	cout << sum;

	return 0;
}