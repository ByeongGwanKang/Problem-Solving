#include <stdio.h>

int main(void) {
    int n;
    int cnt = 0;
    int ary[100] = { 0 };
    int val;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        ary[i] = val;
    }
    int v;
    scanf("%d", &v);
    for (int i = 0; i < n; i++) {
        if (ary[i] == v)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
