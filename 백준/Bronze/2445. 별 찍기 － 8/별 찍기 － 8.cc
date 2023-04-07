#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n; j++) {
			if (j > i&&i+j<2*n-1&&j!=2*n&&i<n)
				cout << " ";

			else if (i+j>=2*n-1&&i>n-1&&i>j-1) {
				cout << " ";
			}
			else
				cout << "*";
		}
		cout << "\n";
	}


	return 0;
}