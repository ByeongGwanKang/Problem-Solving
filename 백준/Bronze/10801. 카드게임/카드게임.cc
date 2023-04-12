#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <set>
using namespace std;

int main(void) {
	int a[10] = { 0 };
	int b[10] = { 0 };
	int a_cnt = 0;
	int b_cnt = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i])
			a_cnt++;
		else if (a[i] < b[i])
			b_cnt++;
	}
	if (a_cnt == b_cnt)
		cout << "D";
	else if (a_cnt > b_cnt)
		cout << "A";
	else cout << "B";
	return 0;
}