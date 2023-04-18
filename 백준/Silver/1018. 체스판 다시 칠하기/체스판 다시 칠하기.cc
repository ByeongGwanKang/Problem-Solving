#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	string str_a[8];
	string str_b[8];
	int ans = 100;
	int cnt_a = 0, cnt_b = 0;
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			str_a[i] = "WBWBWBWB";
			str_b[i] = "BWBWBWBW";
		}
		else {
			str_a[i] = "BWBWBWBW";
			str_b[i] = "WBWBWBWB";
		}
	}
	int n, m;
	cin >> n >> m;
	vector<string>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			cnt_a = 0;
			cnt_b = 0;
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (arr[i + k][j + l] == str_a[k][l])
						cnt_a++;
					if (arr[i + k][j + l] == str_b[k][l])
						cnt_b++;
				}
			}
			ans = min(min(cnt_a, cnt_b), ans);
		}
	}
	cout << ans;
	return 0;
}
