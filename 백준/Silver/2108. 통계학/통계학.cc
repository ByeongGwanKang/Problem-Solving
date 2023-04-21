#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<queue>
#include<unordered_map>
#include <cmath>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int n;
	cin >> n;
	vector<int>arr(n);
	double sum = 0;
	vector<pair<int, int>>cnt(8001);
	int min = 4000, max = -4000;
	int val;
	for (int i = 0; i < 8001; i++) {
		if (i <= 4000)
			cnt[i].second = i;
		else cnt[i].second = -(i - 4000); //i[4001].second = -1
	}
	for (int i = 0; i < n; i++) {
		cin >> val;
		arr[i] = val;
		sum += val;
		if (val >= 0)
			cnt[val].first--;
		else
			cnt[4000 - val].first--;
		if (val < min)
			min = val;
		if (val > max)
			max = val;
	}
	sort(arr.begin(), arr.end());
	sort(cnt.begin(), cnt.end());


	cout << floor(sum / n+0.5) << "\n";		//평균
	cout << arr[(n / 2)] << "\n";	//중앙
	if (cnt[0].first == cnt[1].first)
		cout << cnt[1].second << "\n";
	else cout << cnt[0].second << "\n";
	cout << max - min;	//범위
	return 0;
}