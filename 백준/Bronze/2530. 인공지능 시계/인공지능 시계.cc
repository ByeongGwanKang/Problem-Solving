#include <iostream>


int main(void) {
	using namespace std;
	int hour, min, sec, dur, cnt;
	int a_hour, a_min;
	cin >> hour >> min >> sec;
	cin >> dur;
	a_hour = dur / 3600;
	dur %= 3600;
	a_min = dur / 60;
	dur %= 60;
	if (sec + dur >= 60) {
		a_min++;
		sec=sec - 60;
	}
	if (min + a_min >= 60) {
		a_hour++;
		min = min - 60;
	}
	if ((hour + a_hour) >= 24) {
		cnt = (hour + a_hour) / 24;
		hour = hour - cnt * 24;
	}
	cout << hour + a_hour << " " << min + a_min << " " << sec + dur;
	return 0;
}