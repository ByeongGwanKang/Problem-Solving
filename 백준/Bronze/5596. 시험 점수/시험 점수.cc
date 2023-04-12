#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <set>
using namespace std;

int main(void) {
	int sum1 = 0, sum2 = 0;
	int n;
	for (int i = 0; i < 4; i++) {
		cin >> n;
		sum1 += n;
	}
	for (int i = 0; i < 4; i++) {
		cin >> n;
		sum2 += n;
	}
	cout << max(sum1, sum2);
	return 0;
}