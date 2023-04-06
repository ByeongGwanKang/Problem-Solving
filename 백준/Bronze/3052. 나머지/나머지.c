#include <stdio.h>

int main(void) {
	int ary[10];
	int val;
	int cnt = 10;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &val);
		ary[i] = val % 42;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j > i; j--)
			if (ary[i] == ary[j]) {
				cnt--;
				break;
			}
	}
	printf("%d", cnt);
	return 0;
}