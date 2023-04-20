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
	unordered_map<int, int>map;
	int n;
	int val;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val;
		map[val]++;
	}
	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> val;
		cout << map[val] << " ";
	}
	return 0;
}
