#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	string str;
	int i,t, size;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> str;
		size = str.size();
		cout << str[0] << str[size - 1] << endl;
	}


	return 0;
}
