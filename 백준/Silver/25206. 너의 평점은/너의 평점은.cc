#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	cout << fixed;
	cout.precision(6);
	string str;
	double a;
	string b;
	double sum = 0;
	int val = 0;
	for (int i = 0; i < 20; i++) {
		cin >> str >> a >> b;
		if(b!="P")
			val += a;
		if (b == "A+")
			sum += (4.5 * a);
		if (b == "A0")
			sum += (4.0 * a);
		if (b == "B+")
			sum += (3.5 * a);
		if (b == "B0")
			sum += (3.0 * a);
		if (b == "C+")
			sum += (2.5 * a);
		if (b == "C0")
			sum += (2.0 * a);
		if (b == "D+")
			sum += (1.5 * a);
		if (b == "D0")
			sum += (1.0 * a);
	}
	cout << sum / val;
		return 0;
	}