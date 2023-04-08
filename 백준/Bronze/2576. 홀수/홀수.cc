#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	int sum = 0;
	int min = 101;
	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 == 1) {
			sum += n;
			if (min > n) {
				min = n;
			}
		}
	}
	if (sum == 0)
		cout << -1;
	else {
		cout << sum << endl;
		cout << min;
	}

	return 0;
}