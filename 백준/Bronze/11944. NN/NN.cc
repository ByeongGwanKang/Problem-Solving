#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;
	int n,m;
	cin >> n >> m;
	str = to_string(n);
	if (str.size() * n < m) {
		for (int i = 0; i < n; i++) {
			cout << n;
		}
	}
	else {
		for (int i = 0; i < m;) {
			for (int j = 0; j < str.size(); j++) {
				cout << str[j];
				i++;
				if (i == m)
					return 0;
			}
			
		}
	}
	
		return 0;
	}