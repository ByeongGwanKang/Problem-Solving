#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, pair<int,string>>> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second.second;
		arr[i].second.first = i;
	}
	sort(arr.begin(), arr.end());
	
	for (int i = 0; i < n; i++) {
		cout << arr[i].first <<" "<< arr[i].second.second << "\n";
	}

	return 0;
}