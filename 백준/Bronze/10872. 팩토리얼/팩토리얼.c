#include <stdio.h>

int main(void) {
	int n;
	int ans=1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		ans = ans * i;
	}
	printf("%d", ans);
	return 0;
}