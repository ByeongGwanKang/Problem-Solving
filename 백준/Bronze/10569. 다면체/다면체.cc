#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
//면 = 2-꼭+모 v e
int main(void) {
	int t;
	cin >> t;
	int v, e;
	for (int i = 0; i < t; i++) {
		cin >> v >> e;
		cout << 2 - v + e << endl;
	}
	return 0;
}