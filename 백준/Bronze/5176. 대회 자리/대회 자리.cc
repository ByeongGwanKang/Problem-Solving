#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int k;
	cin >> k;
	int p, m;
	int res;
	for (int i = 0; i < k; i++) {
		cin >> p >> m;
		vector<int> arr(m);
		int cnt = 0;
		for (int j = 0; j < p; j++) {
			cin >> res;
			arr[res-1] = 1;
		}
		for (int j = 0; j < m; j++) {
			if (arr[j] == 1)
				cnt++;
		}
		cout << p - cnt << "\n";
	}
		return 0;
	}