#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>



using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector <pair<int,int>> x(n);

	for (int i = 0; i < n; i++) {
		cin >> x[i].first >> x[i].second;
	}
	sort(x.begin(), x.end());
	for (int i = 0; i < n; i++) {
		cout << x[i].first << " " << x[i].second << "\n";
	}

	return 0;
}