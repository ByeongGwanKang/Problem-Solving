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
	set<int> arr;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr.insert(k);
	}
	for (auto& e : arr) {
		cout << e<<" ";
	}
	return 0;
}