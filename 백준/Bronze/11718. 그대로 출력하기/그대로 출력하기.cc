#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	string str;
	while (true) {
		getline(cin, str);
		cout << str << endl;
		if (str == "") break;
	}

	return 0;
}
