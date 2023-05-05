#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<stack>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int n;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		if (n < 40)
			n = 40;
		sum += n;
	}
	cout << sum / 5;

	return 0;
}
