#include <stdio.h>

int main(void) {
    int a[100];
    int n, i;

    scanf("%d", &n);

    a[0] = 100;
    a[1] = n;

    printf("%d %d ", a[0], a[1]);

    for(i=2; i<100; i++) {
        a[i] = a[i-2] - a[i-1];

        printf("%d ", a[i]);

        if(a[i] < 0) {
            break;
        }
    }

    return 0;
}
