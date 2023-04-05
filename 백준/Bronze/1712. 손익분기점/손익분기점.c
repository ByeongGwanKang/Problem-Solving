#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (c > b)
		printf("%d", a / (c - b)+1);
	else printf("-1");
	return 0;
}