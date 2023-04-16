#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	int n;
	char a, b;
	int cnt_a = 0, cnt_b = 0;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cnt_a = 0;
		cnt_b = 0;
		for (int j = 0; j < n; j++) {
			cin >> a >> b;
			if (a == 'R' && b == 'S')
				cnt_a++;
			if (a == 'S' && b == 'P')
				cnt_a++;
			if (a == 'P' && b == 'R')
				cnt_a++;
			if (a == 'P' && b == 'S')
				cnt_b++;
			if (a == 'R' && b == 'P')
				cnt_b++;
			if (a == 'S' && b == 'R')
				cnt_b++;
		}
		if (cnt_a == cnt_b)
			cout << "TIE" << "\n";
		else if (cnt_a > cnt_b)
			cout << "Player 1" << "\n";
		else cout << "Player 2" << "\n";
	}
	return 0;
}