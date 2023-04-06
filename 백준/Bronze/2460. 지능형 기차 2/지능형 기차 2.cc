#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int pos, neg, temp = 0;
	int max = 0;
	for (int i = 0; i < 10; i++) {
		cin >> neg >> pos;
		temp = temp + pos - neg;
		if (max < temp)
			max = temp;
	}
	cout << max;
	
	return 0;
}