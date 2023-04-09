#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
#include <bitset>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);
	int ans=0, temp=0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {	
				temp = arr[i] + arr[j] + arr[k];
				if (temp <= m)
					ans = max(temp, ans);
				else continue;

			}
		}
		if (ans == m)
			break;
	}
	cout << ans;
		
	return 0;
}