#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	int sum = 0;
	int max = 0;
	int num;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> n;
			sum += n;
		}
		if (max < sum) {
			max = sum;
			num = i + 1;
		}
	}
	cout << num << " " << max;
	return 0;
}
