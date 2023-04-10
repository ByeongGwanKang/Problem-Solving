#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int arr[7] = { 0 };
	int n, sum = 0;
	int min;
	for (int i = 0; i < t; i++) {
		sum = 0;
		min = 100;
		for (int j = 0; j < 7; j++) {
			cin >> n;
			arr[j] = n;
			if (n % 2 == 0)
				sum += n;
		}
		for (int j = 0; j < 7; j++) {
			if (min > arr[j]&&arr[j]%2==0)
				min = arr[j];

		}
		cout << sum << " " << min << "\n";
	}


		return 0;
	}