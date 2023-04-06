#include <stdio.h>
#include <string.h>
int main(void) {
	char a[21];
	int t, r;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &r);
		scanf("%s", a);
		for (int k = 0; k < strlen(a); k++) {
			for (int j = 0; j < r; j++) {
				printf("%c", a[k]);
			}
		}
		printf("\n");
	}
	return 0;
}