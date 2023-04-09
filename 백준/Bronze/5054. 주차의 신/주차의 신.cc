#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
#include <bitset>
using namespace std;

int main(void) {
	int t;
	int n;
	int x;
	cin >> t;
	int max = 0, min = 100;
	for (int i = 0; i < t; i++) {
		cin >> n;
		max = 0;
		min = 100;
		for (int j = 0; j < n; j++) {
			cin >> x;
			if (x > max)
				max = x;
			if (x < min)
				min = x;
		}
		cout << 2 * (max - min) << endl;
	}
	return 0;
}