#include <stdio.h>
//3 5 6 8 9 10 11 12 13 14 15 
//3 6 9 12 15 18 21 24 27 30
int main(void) {
	int n;
	scanf("%d", &n);
	if (n == 4 || n == 7) {
		printf("-1");
	}
	else if (n % 5 == 0) {
		printf("%d", n / 5);
	}

	else {
		for (int i = 1; i < 10; i++) {
			if ((n - 3 * i) % 5 == 0) {
				printf("%d", i + (n - 3 * i) / 5);
				break;
			}
		}
	}
	return 0;
}