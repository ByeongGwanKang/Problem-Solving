#include <iostream>
#include <string>
#include <map>

int main(void) {
	using namespace std;
	int n, p, price, best=0;
	string str;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		best = 0;
		map<int, string> m;
		for (int j = 0; j < p; j++) {
			cin >> price >> str;
			if (best < price)
				best = price;
			m.insert(pair<int, string>(price, str));
		}
		cout << m.at(best) << "\n";
		
	}
	return 0;
}