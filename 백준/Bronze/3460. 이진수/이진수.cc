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
	cin >> t;
	int n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		bitset<20> bit(n);
		for (int i = 0; i < 20; i++) {
			if (bit[i] == 1)
				cout << i << " ";
		}
	}
	return 0;
}