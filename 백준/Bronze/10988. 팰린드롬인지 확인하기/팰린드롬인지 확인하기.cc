#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	string str;
	string rvs;
	int check = 0;
	cin >> str;
	check = 0;
	if (str[0] == '0')
		return 0;
	rvs = str;
	reverse(rvs.begin(), rvs.end());
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != rvs[i])
			check = 1;
	}
	if (check == 0)
		cout << 1;
	else cout << 0;
	return 0;
}
