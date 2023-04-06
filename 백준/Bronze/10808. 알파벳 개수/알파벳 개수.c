#include <stdio.h>
#include <string.h>
int main(void) {
	int cnt[26] = { 0 };
	char arr[101];

	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		cnt[arr[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}