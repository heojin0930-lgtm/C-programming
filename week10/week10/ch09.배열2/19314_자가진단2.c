#include <stdio.h>

int main(void) {
    int a[10] = {0};
    int n, i;

    while(1) {
        scanf("%d", &n);

        if(n == 0) {
            break;
        }

        a[n / 10]++;
    }

    for(i=0; i<10; i++) {
        if(a[i] > 0) {
            printf("%d : %d\n", i, a[i]);
        }
    }

    return 0;
}
