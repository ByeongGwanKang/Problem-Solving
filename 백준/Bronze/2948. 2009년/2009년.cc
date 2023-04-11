#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int x, y;
	cin >> y >> x;
	int sum = y;
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < x - 1; i++) {
		sum += arr[i];
	}
	switch (sum % 7)
	{
	case 0:
		cout << "Wednesday";
		break;
	case 1:
		cout << "Thursday";
		break;
	case 2:
		cout << "Friday";
		break;
	case 3:
		cout << "Saturday";
		break;
	case 4:
		cout << "Sunday";
		break;
	case 5:
		cout << "Monday";
		break;
	case 6:
		cout << "Tuesday";
		break;

	}
	return 0;
}