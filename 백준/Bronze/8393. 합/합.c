#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	for (n; n > 0; n--) {
		sum += n;
	}
	printf("%d", sum);
	return 0;
}