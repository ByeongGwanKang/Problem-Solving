#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	int arr[8] = { 0 };
	int asc = 0, des = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= 8; i++) {
		if (arr[i - 1] == i)
			asc++;
		else if (arr[i - 1] == 8 - i + 1)
			des++;
	}
	if (asc == 8)
		cout << "ascending";
	else if (des == 8)
		cout << "descending";
	else cout << "mixed";
	return 0;
}