#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <set>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cin.ignore();
	vector<pair <int, string>> arr(n);
	for (int j = 0; j < n; j++) {
		getline(cin, arr[j].second);

		arr[j].first = arr[j].second.size();
	}
	sort(arr.begin(), arr.end());

	for (int j = 0; j < n; j++) {
		if (j != n) {
			if (arr[j].second == arr[j + 1].second)
				continue;
		}
		cout << arr[j].second << "\n";
	}
	return 0;
}
