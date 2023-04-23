#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<deque>
#include<unordered_map>
#include <cmath>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int arr[5] = { 0 };
	int temp;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	while (true) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
				cout << arr[0] << " " << arr[1] << " " << arr[2]
					<< " " << arr[3] << " " << arr[4] << endl;
			}
		}
		if (arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4 &&
			arr[4] == 5)
			break;
	}

	return 0;
}
