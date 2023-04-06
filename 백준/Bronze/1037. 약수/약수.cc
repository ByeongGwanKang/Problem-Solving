#include <iostream>
#include <vector>

int main(void) {
	using namespace std;
	int n;
	cin >> n;
	int small = 1000000, big = 2;
	int arr[50] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < small)
			small = arr[i];
		if (arr[i] > big)
			big = arr[i];
	}
	cout << big * small;
	return 0;
}