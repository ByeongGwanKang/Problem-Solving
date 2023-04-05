#include <stdio.h>
int main(void) {
	int m, n;
	scanf("%d%d", &m, &n);
	int min = m;
	int sum = 0;
	for (n; n >= m; n--) {
		if (n == 2) {
			sum += 2;
			min = 2;
		}
		for (int i = 2; i < n; i++) {
			if (n % i == 0)
				break;
			if (i == n - 1 && n != 2) {
				sum += n;
				min = n;
			}
		}
	}
	if (sum == 0)
		printf("-1");
	else {
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	return 0;
}