#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int n;
	int c;
	double g;
	int sum_c=0;
	double sum_g=0;
	double avg;
	for (int i = 0; i < t; i++) {
		cin >> n;
		sum_c = 0;
		sum_g = 0;
		for (int j = 0; j < n; j++) {
			cin >> c >> g;
			sum_c += c;
			sum_g += g*c;

		}
		avg = sum_g / sum_c;
		printf("%d %.1f\n", sum_c, avg);
	}

	return 0;
}