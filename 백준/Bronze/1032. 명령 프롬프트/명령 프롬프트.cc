#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	cin.ignore();
	vector<string> arr(n);
	string ans;
	int check;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < arr[0].size(); i++) {
		check = 1;
		ans.resize(arr[0].size());
		for (int j = 0; j < n - 1; j++) {
			if (arr[j][i] != arr[j + 1][i])
				check = 0;
		}
		if (check == 1)
			ans[i] = arr[0][i];
		else ans[i] = '?';
	}
	cout << ans;
	return 0;
}