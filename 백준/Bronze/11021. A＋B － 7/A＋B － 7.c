#include <stdio.h>

int main() {
	int T, A, B;
	int i = 1;
	scanf("%d", &T);
	for (T; T > 0; T--) {
		scanf("%d%d", &A, &B);
		printf("Case #%d: %d\n",i, A + B);
		i++;
	}

	return 0;
}