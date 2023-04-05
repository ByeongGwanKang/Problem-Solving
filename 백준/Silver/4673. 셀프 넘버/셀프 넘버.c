#include <stdio.h>

int d(int n) {
	int res = n;
	while (n > 0) {
		res = res + (n % 10);
		n = n / 10;
	}
	return res;
}

int main(void) {
	int check;
	int ary[10001] = { 0 };
	for (int i = 1; i <= 10000; i++) {
		check = d(i);
		if (check<10001)
			ary[check] = 1;
	}
	for (int i = 1; i <= 10000; i++) {
		if (ary[i] != 1)
			printf("%d\n", i);
	}
	return 0;
}
