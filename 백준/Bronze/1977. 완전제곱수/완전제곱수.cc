#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int m, n, sum=0, pow, min = 10000;
	cin >> m >> n;
	for (int i = 1; i <= 100; i++) {
		pow = i * i;
		if (pow >= m && pow <= n) {
			sum += pow;
			if (min > pow)
				min = pow;
		}
	}
	if (sum == 0)
		cout << -1;
	else cout << sum << "\n" << min;
	return 0;
}