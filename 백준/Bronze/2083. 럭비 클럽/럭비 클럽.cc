#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<stack>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기

	string str;
	int age, kg;
	while (true) {
		cin >> str >> age >> kg;
		if (str == "#" && age == 0 && kg == 0)
			return 0;
		if (age > 17 || kg >= 80)
			cout << str << " Senior" << "\n";
		else 			
			cout << str << " Junior" << "\n";

	}
	return 0;
}