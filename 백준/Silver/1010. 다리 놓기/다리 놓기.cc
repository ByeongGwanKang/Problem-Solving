#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	int n, m;
	long long ans = 1;
	int div = 1;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		ans = 1;
		div = 1;
		for (int j = m; j > m - n; j--) {
			ans *= j;
			ans /= div;
			div++;
		}
		cout << ans << "\n";
	}
	return 0;
}
