#include <stdio.h>

int main() {
	int H,M,time;
	scanf("%d%d", &H,&M);
	scanf("%d", &time);
	if (M + time >= 60) {
		if (H + ((M + time) / 60) >= 24) {
			printf("%d %d", (H + ((M + time) / 60)) % 24, (M + time) % 60);
		}
		else
			printf("%d %d", H + ((M + time) / 60), (M + time) % 60);
	}
	else
		printf("%d %d", H, M + time);
	return 0;
}