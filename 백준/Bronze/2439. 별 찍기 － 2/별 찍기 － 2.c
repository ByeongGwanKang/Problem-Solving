#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int i = N ; i > 0; i--) {
		for (int j = 0; j <= N; j++) {
			if (j < i-1)
				printf(" ");
			if (j>=i)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}