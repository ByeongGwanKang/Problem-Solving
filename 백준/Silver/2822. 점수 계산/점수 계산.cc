#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	pair <int, int> arr[8];
	int max[5] = { 0 };
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i].first;
		arr[i].second = i;
	}
	sort(arr,arr+8);
	for (int i = 7; i >2; i--) {
		sum += arr[i].first;
		max[i - 3] = arr[i].second+1;
	}
	cout << sum << endl;
	sort(max, max + 5);
	for (int i = 0; i < 5; i++) {
		cout << max[i] << " ";
	}

	return 0;
}