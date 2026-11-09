#include <stdio.h>

int main(void) {
    int a[11] = {0};
    int n, i;

    while(1) {
        scanf("%d", &n);

        if(n < 1 || n > 10) {
            break;
        }

        a[n]++;
    }

    for(i=1; i<=10; i++) {
        if(a[i] > 0) {
            printf("%d : %d\n", i, a[i]);
        }
    }

    return 0;
}
