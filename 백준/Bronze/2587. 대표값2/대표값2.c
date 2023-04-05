#include <stdio.h>
int main(void) {
	int arr[5] = { 0 };
	int sum = 0;
	int avg, temp;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5;
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 4; j++) {
			if (arr[i] > arr[j + 1]) {
				temp = arr[i];
				arr[i] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("%d\n", avg);
	printf("%d", arr[2]);
	return 0;
}