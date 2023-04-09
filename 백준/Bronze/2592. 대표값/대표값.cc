#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	int arr[100] = { 0 };
	int sum = 0;
	int max=0;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		sum += n;
		arr[n/10]++;
	}
	for (int i = 0; i < 100; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (arr[i] == max) {
			max = i * 10;
		}
	}
	cout << sum / 10 << endl;
	cout << max;
	return 0;
}
