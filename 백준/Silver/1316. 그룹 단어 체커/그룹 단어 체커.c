#include <stdio.h>
#include <string.h>
int main(void) {
	char a[105];
	int n;
	scanf("%d", &n);
	int cnt = n;
	for (int k = 0; k < n; k++) {
		scanf("%s", a);
		int len = strlen(a);
		for (int i = 0; i < len; i++) {
			if (a[i] != a[i + 1]) {
				for (int j = i + 2; j < len; j++) {
					if (a[j] == a[i]) {
						cnt--;
						i = len;
						break;
					}
				}
			}
		}
	}
	printf("%d", cnt);
	return 0;
}