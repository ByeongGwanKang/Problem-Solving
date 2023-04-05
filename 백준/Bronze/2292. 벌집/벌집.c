#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int sum = 0;
	int cnt = 0;
	if (n == 1)
		printf("1");
	else {
		for (int i = 0;; i++) {
			sum += i;
			cnt++;
			if (sum > (n - 2) / 6)
				break;
		}
		printf("%d", cnt);
	}

	return 0;
}