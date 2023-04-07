#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		for (int j = n-i; j > 1; j--) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}
		cout << endl;

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 2*n; k > 2*i+1; k--) {
			cout << "*";
		}
		cout << endl;

	}

	return 0;
}