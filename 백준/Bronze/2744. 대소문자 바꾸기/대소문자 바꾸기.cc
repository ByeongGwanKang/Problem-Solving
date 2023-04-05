#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	string str;
	int check = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (isupper(str[i]))
			str[i]=tolower(str[i]);
		else str[i] = toupper(str[i]);
	}

	cout << str << endl;
	



	return 0;
}
