#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	int temp;
	for (int i = 1; i <= n; i++) {
		temp = i;
		while (temp%5==0) {
			cnt++;
			temp /= 5;
			if (temp == 0)
				break;
		}
	}
	cout << cnt;

	return 0;
}
