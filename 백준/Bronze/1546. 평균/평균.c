#include <stdio.h>

int main(void) {
	double ary[1000];
	int n;
	double M = 0;
	double sum = 0;
	double avg;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &ary[i]);
	}
	for (int i = 0; i < n; i++) {
		if (ary[i] > M)
			M = ary[i];
	}
	for (int i = 0; i < n; i++) {
		ary[i] = ary[i] / M * 100;
		sum += ary[i];
	}
	avg = (double)sum / n;
	printf("%.2lf", avg);
	return 0;
}
