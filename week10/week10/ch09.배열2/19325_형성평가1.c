#include <stdio.h>

int main(void) {
    int a[7] = {0};
    int n, i;

    for(i=0; i<10; i++) {
        scanf("%d", &n);
        a[n]++;
    }

    for(i=1; i<=6; i++) {
        printf("%d : %d\n", i, a[i]);
    }

    return 0;
}
