#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int t;
	string str1;
	string str2;
	cin >> t;
	int k;
	for (int i = 0; i < t; i++) {
		cin >> str1 >> str2;
		printf("Distances:");
		for (int j = 0; j < str1.size(); j++) {
			k = 0;
			k = str2[j] - str1[j];
			if (k < 0) k += 26;
			cout << " " << k;
		}
		cout << "\n";
	}

	return 0;
}