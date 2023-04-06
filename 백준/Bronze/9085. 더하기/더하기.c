#include <stdio.h>

int main(void) {
	int t;
	int n;
	int val;
	int sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		sum = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &val);
			sum += val;
		}
		printf("%d\n", sum);
	}
	return 0;
}