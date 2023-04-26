#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<stack>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int a, b;
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0)
			return 0;
		if (a > b)
			cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}
	return 0;
}
