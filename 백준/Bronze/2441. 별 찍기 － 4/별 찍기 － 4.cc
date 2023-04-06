#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}
	return 0;
}