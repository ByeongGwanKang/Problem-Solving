#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int arr[5] = { 0 };
	int cnt = 0;
	int val = 1;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	while (cnt < 3) {
		cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (val % arr[i] == 0)
				cnt++;
		}
		val++;
	}
	cout << val-1;
	return 0;
}
