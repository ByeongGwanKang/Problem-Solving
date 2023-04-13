#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <set>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	int cnt = 0;
	if (n % 2 == 0) {
		if (a == b) {
			cout << "Deletion succeeded";
		}
		else cout << "Deletion failed";
	}
	else {
		for (int i = 0; i < a.size(); i++) {
			if ((int)a[i] != (int)b[i]) {
				cnt++;
			}
		}
		if (cnt == a.size())
			cout << "Deletion succeeded";

		else cout << "Deletion failed";

	}
	return 0;
}
