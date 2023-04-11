#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector <int>arr(n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	reverse(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		if (k / arr[i] >= 1) {
			cnt++;
			k = k - arr[i];
			i--;
		}
	}
	cout << cnt;
	return 0;
}