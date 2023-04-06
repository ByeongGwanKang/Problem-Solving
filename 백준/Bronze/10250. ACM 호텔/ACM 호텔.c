#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	int h, w, n, garo,sero;
	for (int i = 0; i < t; i++) {
		scanf("%d%d%d", &h, &w, &n);
		if (n % h == 0)
			garo = (n / h);
		else
			garo = ((n / h)+1);
		if (n % h == 0)
			sero = h * 100;
		else
			sero = (n % h) * 100;
		printf("%d\n", garo + sero);
	}
	return 0;
}	