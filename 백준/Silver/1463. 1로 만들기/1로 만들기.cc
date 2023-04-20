#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<queue>
#include<unordered_map>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int n;
	cin >> n;
	vector<int> arr(n+1);
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= n; i++) {
		if (i % 6 == 0) {
			arr[i] = min(min((arr[i - 1] + 1), (arr[i / 3] + 1)),
				(arr[i / 2] + 1));
		}
		else if (i % 3 == 0) {
			arr[i] = min((arr[i - 1] + 1), (arr[i / 3] + 1));
		}
		else if (i % 2 == 0) {
			arr[i] = min((arr[i - 1] + 1), (arr[i / 2] + 1));
		}
		else arr[i] = arr[i - 1] + 1;
	}
	cout << arr[n];
	return 0;
}
