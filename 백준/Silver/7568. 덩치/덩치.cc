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
	vector<pair<int, int>>arr(n);
	vector<int> cnt(n,1);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i].first < arr[j].first && 
				arr[i].second < arr[j].second)
				cnt[i]++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}