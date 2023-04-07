#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
	
		for (int j = n-1; j >i; j--) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}