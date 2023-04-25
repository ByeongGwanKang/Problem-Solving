#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int n, m;
	cin >> n >> m;
	vector<int> arr(n+1);
	vector<int> arr_temp(n + 1);
	for (int i = 0; i <= n; i++) {
		arr[i] = i;
		arr_temp[i] = i;
	}
	
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		int a_temp = a, c_temp = c;
		int a_temp_temp = a;
		for (int j = 0; j <= (b - c); j++) {
			arr[a_temp++] = arr_temp[c_temp++];
		}
		for (int j = 0; j < (c - a); j++) {
			arr[a_temp++] = arr_temp[a_temp_temp++];
		}
		for (int i = 0; i <= n; i++) {
			arr_temp[i] = arr[i];
		}
		
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
