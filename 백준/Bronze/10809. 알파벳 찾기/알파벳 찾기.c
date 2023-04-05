#include <stdio.h>
#include <string.h>
int main(void) {
	char a[101];
	scanf("%s", a);
	for (int i = 'a'; i <= 'z'; i++) {
		int cnt = 0;
		for (int j = 0; j < strlen(a); j++) {
			if (i == a[j]) {
				printf("%d ", j);
				cnt++;
				break;
			}
			
		}
		if (cnt == 0) printf("-1 ");
	}
	return 0;
}