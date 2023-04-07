#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
	string str;
	int size, cnt;
	while(true) {
		getline(cin,str);
		if (str == "#")
			break;
		size = str.size();
		cnt=0;
		for (int i = 0; i < size; i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'
				|| str[i] == 'o' || str[i] == 'u'|| str[i] == 'A' || str[i] == 'E' 
				|| str[i] == 'I'|| str[i] == 'O' || str[i] == 'U')
				cnt++;
		}
		cout << cnt << "\n";
	} 
	return 0;
}