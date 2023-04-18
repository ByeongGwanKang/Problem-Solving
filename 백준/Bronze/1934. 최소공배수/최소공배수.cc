#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	int a, b;
	int ans;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		for (int j = 1; j <= b; j++) {
			ans = (a * j);
			if (ans % b == 0) {
				cout << ans << "\n";
				break;
			}
		}
	}
	return 0;
}
