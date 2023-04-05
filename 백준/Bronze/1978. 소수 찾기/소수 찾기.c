#include <stdio.h>


int main(void) {
	int n;
	int arr[101];
	scanf("%d", &n);
	int cnt = n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) 
			cnt--;
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0 && arr[i] != 2) {
				cnt--;
				break;
			}
		}

	}
	printf("%d", cnt);
	return 0;
}