#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int arr[9] = { 0 };
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				arr[i] = 100;
				arr[j] = 100;
				break;
			}
		}
		if (arr[i] == 100)
			break;
	}
	sort(arr, arr + 9);
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}