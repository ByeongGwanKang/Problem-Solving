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
	cin >> n;
	string str;
	cin.ignore();
	for (int i = 1; i <= n; i++) {

		getline(cin, str);
		cout << i << ". " << str << endl;
	}
	return 0;
}