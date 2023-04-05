#include <stdio.h>

int main(void) {
    int n, val, cnt = 0;
    
    scanf("%d", &n);
    val = n;

    do  {

        val = (val % 10) * 10 + ((val % 10 + val / 10) % 10);
        cnt++;
    } while (n != val);
    printf("%d", cnt);
    return 0;
}