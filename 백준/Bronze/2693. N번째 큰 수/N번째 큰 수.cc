#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int arr[10] = { 0 };

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 10);
		cout << arr[7] << "\n";
		}

		return 0;
	}