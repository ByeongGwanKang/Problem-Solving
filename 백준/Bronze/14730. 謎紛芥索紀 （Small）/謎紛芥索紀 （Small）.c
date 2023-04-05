#include <stdio.h>

int main(void) {
	int n;
	int c, k;
	int res = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &c, &k);
		res += c * k;
	}
	printf("%d", res);
	return 0;
}