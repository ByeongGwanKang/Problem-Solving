#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n-1; j > i; j--) {
			cout << " ";
		}
		for (int j = 0; j <2*i+1; j++) {
			if (i!=n-1) {
				if (j == 0 || j == 2 * i)
					cout << "*";
				else cout << " ";
			}
			else cout << "*";
		}
		cout << "\n";
	}
	
	return 0;
}