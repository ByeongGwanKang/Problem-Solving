#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int c, v;
	for (int i = 0; i < n; i++) {
		cin >> c >> v;
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", c / v, c % v);
	}
	return 0;
}