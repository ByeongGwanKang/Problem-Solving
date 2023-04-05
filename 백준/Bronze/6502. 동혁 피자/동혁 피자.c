#include <stdio.h>

int main(void) {
	int r = 1, w, l;
	for (int i = 1;; i++) {
		scanf("%d", &r);
		if (r == 0)
			return 0;
		scanf("%d%d",&w, &l);
		if ((double)w / 2 * (double)w / 2 + (double)l / 2 * (double)l / 2 <= r * r)
			printf("Pizza %d fits on the table. \n", i);
		else
			printf("Pizza %d does not fit on the table. \n", i);
	}
	return 0;
}
