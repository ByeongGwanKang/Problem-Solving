#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	int i = 666;
	string str;
	while (cnt != n) {
		str = to_string(i);
		for (int j = 0; j < str.size() - 2; j++) {
			if (str[j] == '6' && str[j + 1] == '6' && str[j + 2] == '6') {
				cnt++;
				break;
			}

		}
		i++;
	}
	cout << i-1;
	return 0;
}
