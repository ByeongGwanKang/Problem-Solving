#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int sum = 0;
	int cnt = 0;

	for (int i = 0;; i++) {
		sum += i;
		cnt++;
		if (sum >= n)
			break;
	}
	
	if (cnt%2==1)
		printf("%d/%d", cnt - (sum - n + 1), sum - n + 1);
	else
		printf("%d/%d", sum - n + 1, cnt - (sum - n + 1));
	return 0;
}