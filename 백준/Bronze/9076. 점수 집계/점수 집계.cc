#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int arr[5] = { 0 };
	int max, min,check, sum;
	for (int i = 0; i < t; i++) {
		max = 0;
		min = 10;
		check = 0;
		sum = 0;
		for (int j = 0; j < 5; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 5);
		for (int j = 1; j < 4; j++) {
			sum += arr[j];
			if (arr[j] < min)
				min = arr[j];
			if (arr[j] > max)
				max = arr[j];
			if (max - min >= 4)
				check = 1;
		}
		if (check == 1)
			cout << "KIN" << "\n";
		else cout << sum << "\n";

	}

	return 0;
}