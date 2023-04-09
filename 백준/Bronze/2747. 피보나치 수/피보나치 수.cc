#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	long long n1 = 0;
	long long n2 = 1;
	int temp = 0;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		if (i % 2 == 0)
			n1 += n2;
		else n2 += n1;
	}
		cout << max(n1, n2);

	return 0;
}
