#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
#include <bitset>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	int a=1, b=1, c=1;
	for (int i = n; i > 0; i--)
		a *= i;
	for (int i = k; i > 0; i--)
		b *= i;
	for (int i = n-k; i > 0; i--)
		c *= i;
	cout << a / (b * c);
	return 0;
}