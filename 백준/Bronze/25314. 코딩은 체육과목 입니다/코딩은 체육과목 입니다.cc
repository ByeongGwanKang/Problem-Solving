#include <iostream>

int main(void) {
	using namespace std;
	int val;
	cin >> val;
	for (val; val > 0; val = val - 4) {
		cout << "long ";
	}
	cout << "int" << endl;
	return 0;
}