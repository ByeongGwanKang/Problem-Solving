#include <stdio.h>
int main(void) {
	int arra[100][100] = { 0 };
	int arrb[100][100] = { 0 };
	int sum[100][100] = { 0 };
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arra[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arrb[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum[i][j] = arra[i][j] + arrb[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}