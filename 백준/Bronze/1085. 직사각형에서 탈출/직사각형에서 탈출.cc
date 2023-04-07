#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout<<min(min(w - x, h - y), min(x, y));

	return 0;
}