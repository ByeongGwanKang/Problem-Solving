#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string x, y;
	int a, b;
	cin >> x >> y;
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	a = stoi(x);
	b = stoi(y);
	a = a + b;
	x= to_string(a);
	reverse(x.begin(), x.end());
	cout << stoi(x);

	return 0;
}