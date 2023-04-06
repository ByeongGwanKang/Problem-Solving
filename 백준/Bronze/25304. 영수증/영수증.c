#include <stdio.h>

int main() {
	int X, N, a, b, sum = 0;
	scanf("%d", &X);
	scanf("%d", &N);
	for (N; N > 0; N--) {
		scanf("%d%d", &a, &b);
		sum += a * b;
	}
	if (sum == X)
		printf("Yes");
	else
		printf("No");
	return 0;
}
