#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n,cnt=0;
	cin >> n;
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] == n)
			cnt++;
	}
	cout << cnt;
	return 0;
}