#include <iostream>


int main(void) {
	using namespace std;
	int n, m;
	cin >> n >> m;
	
	if (min(n, m) == 1)
		cout << max(n, m) - 1;
	else
		cout << (m - 1) + (n - 1) * m;
	return 0;
}