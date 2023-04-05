#include <stdio.h>
int main(void) {
	int arr[1000] = { 0 };
	int n,k;
	scanf("%d%d", &n,&k);
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n-1; j++) {
			if (arr[i] < arr[j + 1]) {
				temp = arr[i];
				arr[i] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("%d", arr[k-1]);
	return 0;
}