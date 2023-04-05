#include <stdio.h>

int main(void) {
    int n, x;
    int ary[10000] = { 0 };
    int val;
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        ary[i] = val;
    }

    for (int i = 0; i < n; i++) {
        if (ary[i] < x)
            printf("%d ", ary[i]);
    }
    return 0;
}
