#include <stdio.h>
#include <string.h>
int main(void) {
	char arr[3];
	double score = 0.0;
	scanf("%s", arr);
	if (arr[0] == 65)
		score += 4;
	else if (arr[0] == 66)
		score += 3;
	else if (arr[0] == 67)
		score += 2;
	else if (arr[0] == 68)
		score += 1;
	if (arr[1] == 43)
		score += 0.3;
	else if (arr[1] == 45)
		score -= 0.3;
	printf("%.1lf", score);
	return 0;
}