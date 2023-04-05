#include <stdio.h>

int main(void) {
	int a, i;
	int n;
	scanf("%d%d", &a, &i);
	n = a * (i - 1) + 1;
	printf("%d", n);
	return 0;
}