#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
#include <bitset>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int cnt;
	string str;
	for (int i = 0; i < t; i++) {
		cnt = 0;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(')
				cnt++;
			else
				cnt--;
			if (cnt < 0)
				break;
		}
		if (cnt == 0) printf("YES\n");
		else printf("NO\n");
	}
		
	return 0;
}