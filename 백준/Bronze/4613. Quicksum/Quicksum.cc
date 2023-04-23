#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<deque>
#include<unordered_map>
#include <cmath>
#include <queue>

using namespace std;


int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	string str;
	while (true) {
		getline(cin, str);
		if (str == "#")
			return 0;
		int sum = 0;
		int temp = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ')
				temp = 0;
			else {
				temp = (int)(str[i] - 64) * (i+1);
			}
			sum += temp;
		}
		cout << sum << "\n";
	}
	return 0;
}
