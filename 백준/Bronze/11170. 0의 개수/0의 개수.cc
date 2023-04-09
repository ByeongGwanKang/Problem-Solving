#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	string str;
	int t;
	cin >> t;
	int start, end;
	int cnt = 0;
	for (int i = 0; i < t; i++) {
		cin >> start >> end;
		cnt = 0;
		for (int j = start; j <= end; j++) {
			str = to_string(j);
			for (int k = 0; k < str.size(); k++) {
				if (str[k] == '0') {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}