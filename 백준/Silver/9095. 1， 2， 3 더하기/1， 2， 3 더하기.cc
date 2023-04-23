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
	vector<int> arr(10);
	int t;
	cin >> t;
	arr[0] = 1; //1을 만드는 방법
	arr[1] = 2; //2를 만드는 방법
	arr[2] = 4; //3을 만드는 방법
	arr[3] = arr[0] + arr[1] + arr[2];
	for (int i = 3; i < 10; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	int n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << arr[n - 1]<<"\n";
	}
	return 0;
}
