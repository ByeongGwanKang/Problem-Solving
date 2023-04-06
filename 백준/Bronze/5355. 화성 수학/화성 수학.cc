#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int t;
	cin >> t;
	double a;
	string str;
	for (int i = 0; i < t; i++) {
		cin >> a;
		cin.ignore();
		getline(cin, str);
		for (int j = 0; j < str.size(); j++) {
			if (int(str[j]) == 64) {
				a *= 3;
			}
			if (int(str[j]) == 37) {
				a += 5;
			}
			if (int(str[j]) == 35) {
				a -= 7;
			}
		}
		cout << fixed;
		cout.precision(2);
		cout << a << endl;
	}

	return 0;
}