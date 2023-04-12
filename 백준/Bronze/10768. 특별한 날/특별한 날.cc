#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <set>
using namespace std;

int main(void) {
	int month, day;
	cin >> month >> day;
	if (month == 2 && day == 18)
		cout << "Special";
	else if (month < 2||month==2&&day<18)
		cout << "Before";
	else
		cout << "After";
	return 0;
}