#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
vector<string> arr(5);
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기

	int max = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i].size() > max)
			max = arr[i].size();
	}
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j].size()-1 >= i) {
				cout << arr[j][i];
			}
		}
	}
	return 0;
}