#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j<n-1;j++)
			if (arr[i] > arr[j + 1]) {
				temp = arr[i];
				arr[i] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}