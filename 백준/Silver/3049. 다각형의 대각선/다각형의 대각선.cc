#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cout << ((n * (n - 1) * (n - 2) * (n - 3)) / 24);

	return 0;
}