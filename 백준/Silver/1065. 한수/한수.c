#include <stdio.h>

void fun(int n) {
	int a, b, c, cnt=99;
	if (n < 100)
		printf("%d", n);
	else {
		for (int i = 100; i <= n; i++) {
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;
			if (a - b == b - c)
				cnt++;
		}
		printf("%d", cnt);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	fun(n);
	return 0;
}