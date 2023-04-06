#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int n;
	int arr[10];
	cin >> n;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		n = n - arr[i];
	}
	cout << n;
	return 0;
}