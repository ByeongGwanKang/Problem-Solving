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
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}