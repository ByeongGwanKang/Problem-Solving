#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int t;
	int a, b;
	int arr2[5] = { 6, 2, 4, 8 };
	int arr3[4] = { 1,3,9,7 };
	int arr4[2] = { 6,4 };
	int arr7[4] = { 1,7,9,3 };
	int arr8[4] = { 6,8,4,2 };
	int arr9[2] = { 1,9 };
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		int val = a % 10;
		switch (val)
		{
			case 0:
				cout << 10 << "\n";
				break;
			case 1:
				cout << 1 << "\n";
				break;
			case 2:
				cout << arr2[b % 4] << "\n";
				break;
			case 3:
				cout << arr3[b%4] << "\n";
				break;
			case 4:
				cout << arr4[b%2] << "\n";
				break;
			case 5:
				cout << 5 << "\n";
				break;
			case 6:
				cout << 6 << "\n";
				break;
			case 7:
				cout << arr7[b % 4] << "\n";
				break;
			case 8:
				cout << arr8[b % 4] << "\n";
				break;
			case 9:
				cout << arr9[b % 2] << "\n";
				break;

			
		}
	}
	return 0;
}