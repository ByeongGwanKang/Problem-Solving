#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int n, k;
	cin >> n >> k;
	vector <int>arr(n);
	cout << "<";
	int val = 0;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cnt = 0;
		for (int j = 0; j < k; j++) {
			if (arr[val] != 0) {
				j--;
			}
			cnt = val;
			val++;
			if (val >= n) {
				val %= n;
			}

		}
		arr[cnt]++;
		if (i == n)
			cout << cnt+1;
		else
		cout << cnt+1 << ", ";
	}
	cout << ">";
	return 0;
}