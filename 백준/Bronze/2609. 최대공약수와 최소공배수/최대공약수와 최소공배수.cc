#include <iostream>
#include <vector>

int main(void) {
	using namespace std;
	int a, b, c,val=1;
	cin >> a >> b;
	c = a * b;
	for (int i = 2; i <= min(a, b); i++) {
		if (a % i == 0 && b % i == 0) {
			val = val * i;
			a = a / i;
			b = b / i;
			i--;
		}
	}
	cout << val << endl;
	cout << c / val;
	return 0;
}
