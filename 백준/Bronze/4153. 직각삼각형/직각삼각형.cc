#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
#include <bitset>
using namespace std;

int main(void) {
	int arr[3] = { 0 };
	while (true) {
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			return 0;
		sort(arr, arr + 3);
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
			cout << "right" << endl;
		else cout << "wrong" << endl;
	}
		
	return 0;
}