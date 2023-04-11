#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <set>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int sum;
	int q, d, n, p;
	for (int i = 0; i < t; i++) {
		cin >> sum;
		q = 0;
		d = 0;
		n = 0;
		p = 0;
		for (sum; sum > 0;) {
			if (sum >= 25) {
				sum = sum - 25;
				q++;
			}
			else if (sum >= 10) {
				sum -= 10;
				d++;
			}
			else if (sum >= 5) {
				sum -= 5;
				n++;
			}
			else if (sum >= 1) {
				sum -= 1;
				p++;
			}
		}
		cout << q << " " << d << " " << n << " " << p << "\n";
	}
	return 0;
}