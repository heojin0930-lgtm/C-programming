#include <stdio.h>

int main(void) {
    int a[100];
    int i, j;

    for(i=0; i<100; i++) {
        scanf("%d", &a[i]);

        if(a[i] == 0) {
            break;
        }
    }

    printf("%d\n", i);

    for(j=0; j<i; j++) {
        if(a[j] % 2 != 0) {
            printf("%d ", a[j] * 2);
        }
        else {
            printf("%d ", a[j] / 2);
        }
    }

    return 0;
}
