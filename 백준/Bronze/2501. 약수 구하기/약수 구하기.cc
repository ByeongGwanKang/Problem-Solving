#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	int cnt = 0;
	int check = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			arr[cnt] = i;
			cnt++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0)
			check++;
		else break;
	}
	if (check < k)
		cout << 0;
	else
		cout << arr[k - 1];


	return 0;

}
