#include <stdio.h>

int main(void) {
	int a, b, v;
	scanf("%d%d%d", &a, &b, &v);
	int res = (v - a) / (a - b);
	if ((v - a) % (a - b)!=0)
		res++;
	printf("%d", res + 1);
	return 0;
}