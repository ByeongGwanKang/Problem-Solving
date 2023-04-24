#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기

	int a, b;
	cin >> a >> b;
	int arr[3000] = { 0 };
	int val = 1;
	for (int i = 0; i <b;) {
		for (int j = 1; j <= val; j++) {
			arr[i] = val;
			i++;
		}
		val++;
	}
	int sum = 0;
	for (int i = a - 1; i < b; i++) {
		sum += arr[i];
	}
	cout << sum;
	return 0;
}