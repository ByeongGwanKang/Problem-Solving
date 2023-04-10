#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int a[3] = { 0 };
	int b[2] = { 0 };
	cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1];
	sort(a, a + 3);
	sort(b, b + 2);
	cout << a[0] + b[0]-50;
	return 0;
}