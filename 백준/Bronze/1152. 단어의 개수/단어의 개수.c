#include <stdio.h>
#include <string.h>
int main(void) {
	char a[1000001];
	scanf("%[^\n]", a);
	int len = strlen(a);
	int cnt = 0;
	if (len == 1) {
		if (a[0] == ' ') {
			printf("0");
			return 0;
		}
	}

	for (int i = 1; i < len-1; i++) {
		if (a[i] == ' ')
			cnt++;
	}

	printf("%d", cnt + 1);
	return 0;
}