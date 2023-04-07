#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int k = i; k > 0; k--) {
			cout << "*";
		}
		cout<<endl;
	}
	for (int i = 0; i < n; i++) {
		for (int k = i; k > 0; k--) {
			cout << " ";
		}
		for (int j = n; j > i; j--) {
			cout << "*";
		}

		cout << endl;
	}



	return 0;
}