#include <iostream>
#include <vector>

int main(void) {
	using namespace std;
	int n, m,i,j,k;
	cin >> n >> m;
	vector<int> v(n);
	for (int itr = 0; itr < m; itr++) {
		cin >> i >> j >> k;
		for (i; i <= j; i++) {
			v[i-1] = k;
		}
	}
	for (int itr = 0; itr < n; itr++)
		cout << v[itr] << " ";
	return 0;
}