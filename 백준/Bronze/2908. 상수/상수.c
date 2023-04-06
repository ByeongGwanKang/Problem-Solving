#include <stdio.h>
#include <string.h>
int main(void) {
	char a[10];
	char b[10];
	int temp;
	scanf("%s", a);
	scanf("%s", b);
	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
	temp = b[0];
	b[0] = b[2];
	b[2] = temp;
	if (a[0] > b[0])
		printf("%s", a);
	else if (a[0] < b[0])
		printf("%s", b);
	else if (a[1] > b[1])
		printf("%s", a);
	else if (a[1] < b[1])
		printf("%s", b);
	else if (a[2] > b[2])
		printf("%s", a);
	else if (a[2] < b[2])
		printf("%s", b);
	else printf("%s", a);
	return 0;
}