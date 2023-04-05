#include <stdio.h>
int main(void) {
	int n;
	int arr[250000] = { 0 };
	arr[1] = 1;
	int cnt = 0;
	while(1) {
		cnt = 0;
		scanf("%d", &n);
		if (n == 0)
			return 0;
		for (int i = 2; i <= 2 * n; i++) {
			for (int j = 2; j * i <= 2 * n; j++) {
				arr[i * j] = 1;
			}
		}
		for (int i = n+1; i <= 2 * n; i++) {
			if (arr[i] == 0)
				cnt++;
		}
		printf("%d\n", cnt);
	} 
	return 0;
}