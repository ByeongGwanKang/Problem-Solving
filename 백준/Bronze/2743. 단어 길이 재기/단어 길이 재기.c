#include <stdio.h>
#include <string.h>

int main(void) {
	int cnt = 0;
	char arr[101];
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i<len; i++)
		cnt++;
	printf("%d", cnt);
	return 0;
}