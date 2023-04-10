#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int n;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		arr1[i] = n;
	}
	for (int i = 0; i < 10; i++) {
		cin >> n;
		arr2[i] = n;
	}
	sort(arr1, arr1 + 10, greater<int>());
	sort(arr2, arr2 + 10, greater<int>());
	sum1 = arr1[0] + arr1[1] + arr1[2];
	sum2 = arr2[0] + arr2[1] + arr2[2];
	

	cout << sum1 << " " << sum2;
	return 0;
}