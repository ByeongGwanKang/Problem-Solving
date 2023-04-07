#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 1; k < 2 * (n - i); k++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i < n; i++) {
		for (int j = n; j > i+1; j--) {
			cout << " ";
		}
		for (int k = 0; k < 1+2*i; k++) {
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}