#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int sum = 0;
	int ssum = 0;
	for (int i = 1; i <= n; i++) {
		sum = 0;
		for (int j = 1; j <= i; j++) {
			sum += j;
		}
		ssum += sum;
	}
	cout << 3*ssum;
	return 0;
}