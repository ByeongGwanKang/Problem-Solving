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
	vector<int> arr(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (i != n-1) {
			arr[i + 1] += arr[i];
		}
	}

	cout << sum;
	return 0;
}
