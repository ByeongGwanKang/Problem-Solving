#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}