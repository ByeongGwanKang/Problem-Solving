#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> arr(n);
	int sum = 0;
	int temp = 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			sum += temp;
			temp++;
		}
		else
			temp = 1;
	}
	cout << sum;
	return 0;
}