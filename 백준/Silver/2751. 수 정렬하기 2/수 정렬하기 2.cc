#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>



using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}