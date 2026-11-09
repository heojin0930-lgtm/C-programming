#include <stdio.h>

int main(void) {
    int a[100];
    int i, j, max, min;

    for(i=0; i<100; i++) {
        scanf("%d", &a[i]);

        if(a[i] == 0) {
            break;
        }
    }

    if(i == 0) {
        return 0;
    }

    max = a[0];
    min = a[0];

    for(j=1; j<i; j++) {
        if(a[j] > max) {
            max = a[j];
        }

        if(a[j] < min) {
            min = a[j];
        }
    }

    printf("%d", max + min);

    return 0;
}
