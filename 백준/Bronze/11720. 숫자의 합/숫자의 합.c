#include <stdio.h>

int main(void) {
	char a[101];
	int n;
	int sum = 0;
	scanf("%d", &n);
	scanf("%s", a);
	for (int i = 0; i < n; i++) {
		sum += (int)a[i]-'0';
	}
	printf("%d", sum);
	return 0;
}