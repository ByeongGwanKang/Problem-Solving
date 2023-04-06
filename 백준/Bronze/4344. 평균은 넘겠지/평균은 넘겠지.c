#include <stdio.h>

int main(void) {
	int n, m;
	int ary[1000];
	double avg;
	int sum = 0;
	int cnt = 0;
	double rate;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		sum = 0;
		cnt = 0;
		for (int j = 0; j < m; j++) {
			scanf("%d", &ary[j]);
			sum += ary[j];
		}
		avg = (double)sum / m;
		for (int j = 0; j < m; j++) {
			if (ary[j] > avg) {
				cnt++;
			}
		}
		rate = (double)cnt / m;
		printf("%.3lf%%\n", rate*100);
	}
	return 0;
}