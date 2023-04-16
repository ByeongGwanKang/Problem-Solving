#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int>a(n);
	vector<int>b(n);
	int s=0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end());
	for (int i = 0; i < n; i++) {
		s += a[i] * b[i];
	}
	cout << s;
	return 0;
}