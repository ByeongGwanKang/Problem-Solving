#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int n;
	cin >> n;
	int m;
	int val;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> val;
		if (binary_search(arr.begin(), arr.end(), val))
			cout << 1 << "\n";
		else cout << 0 << "\n";
	}
	return 0;
}