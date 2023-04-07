#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int n, sch, app;
	int sum=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> sch >> app;
		sum += (app % sch);
	}
	cout << sum;
	return 0;
}