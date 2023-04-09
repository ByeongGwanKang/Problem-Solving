#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
#include <bitset>
using namespace std;

int main(void) {
	string str;
	string rvs;
	int check = 0;
	while(true){
		cin >> str;
		check = 0;
		if (str[0] == '0')
			return 0;
		rvs = str;
		reverse(rvs.begin(), rvs.end());
		for (int i = 0; i < str.size(); i++) {
			if (str[i] != rvs[i])
				check = 1;
		}
		if (check == 0)
			printf("yes\n");
		else printf("no\n");


		}
	return 0;
}