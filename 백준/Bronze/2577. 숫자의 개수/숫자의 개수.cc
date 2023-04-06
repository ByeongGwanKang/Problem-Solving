#include <iostream>
#include <string>

int main(void) {
	using namespace std;
	int a, b, c, cnt;
	string str;
	cin >> a >> b >> c;
	str = to_string(a * b * c);
	for (int i = 0; i < 10; i++)
	{
		cnt = 0;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == i+48)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}