#include <stdio.h>
int main(void) {
	int arr[9][9] = { 0 };
	int max;
	int row=0, col=0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	max = arr[0][0];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", row+1, col+1);
	return 0;
}