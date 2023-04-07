#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int s, n, p, q, sum=0;
	for (int i = 0; i < t; i++) {
		cin >> s >> n;
		sum = 0;
		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			sum += q * p;
		}
		cout << sum + s << endl;

	}


	return 0;
}