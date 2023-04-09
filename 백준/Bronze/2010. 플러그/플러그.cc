#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int p;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> p;
		sum += p;
	}
	cout << sum - n + 1;
	return 0;
}
