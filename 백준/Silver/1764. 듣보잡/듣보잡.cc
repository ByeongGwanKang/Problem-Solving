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
	unordered_map<string, int> map;
	int n,m;
	string str;
	cin >> n >> m;
	int k = 0;
	vector<string>arr(min(n,m),"zzzzzzzzzzzzzzzzzzzz");
	for (int i = 0; i < n; i++) {
		cin >> str;
		map[str]++;
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (map[str] == 1) {
			arr[k] = str;
			k++;
		}
	}
	sort(arr.begin(), arr.end());
	cout << k <<"\n";
	for (int i = 0; i < k; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}