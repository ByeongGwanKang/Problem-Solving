#include <stdio.h>
int main(void) {
	int arr[101][101] = { 0 };
	int cnt = 0;
	int t;
	int x, y;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d%d", &x, &y);
		for (int j = x; j<x + 10;j++) {
			for (int k =y; k<y + 10; k++) {
				arr[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int k = 0; k < 100; k++) {
			if (arr[i][k] == 1)
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}