#include <stdio.h>

int main(void) {
    int ary[9];
    int max;
    int val = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &ary[i]);
    }
    max = ary[0];
    for (int i = 0; i < 9; i++) {
        if (ary[i] > max) {
            max = ary[i];
            val = i;
        }
    }
    printf("%d\n%d" ,max, val+1);
    return 0;
}
