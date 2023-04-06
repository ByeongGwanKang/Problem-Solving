#include <stdio.h>

int main(void) {
	int a, b, c, d, e;
	int res = 0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if (a < 0) {
		res = (-a) * c + d + b * e;
	}
	else
		res = (b - a) * e;
	printf("%d", res);
	return 0;
}