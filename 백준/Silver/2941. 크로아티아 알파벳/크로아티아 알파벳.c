#include <stdio.h>
#include <string.h>
int main(void) {
	char a[105];
	scanf("%s", a);
	int cnt = 0;
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (a[i] == 'c' && a[i + 1] == '=') {
			cnt++;
			i++;
		}
		else if (a[i] == 'c' && a[i + 1] == '-') {
			cnt++;
			i++;
		}
		else if (a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] =='=') {
			cnt++;
			i = i + 2;
		}
		else if (a[i] == 'd' && a[i + 1] == '-') {
			cnt++;
			i++;
		}
		else if (a[i] == 'l' && a[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (a[i] == 'n' && a[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (a[i] == 's' && a[i + 1] == '=') {
			cnt++;
			i++;
		}
		else if (a[i] == 'z' && a[i + 1] == '=') {
			cnt++;
			i++;
		}
		else cnt++;
	}
	printf("%d", cnt);
	return 0;
}