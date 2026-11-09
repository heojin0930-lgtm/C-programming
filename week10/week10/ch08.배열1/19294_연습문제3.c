#include <stdio.h>

int main(void) {
    int a[100];
    int i, count = 0;

    for(i=0; i<100; i++) {
        scanf("%d", &a[i]);

        if(a[i] == 0) {
            break;
        }

        count++;
    }

    for(i=1; i<count; i+=2) {
        printf("%d ", a[i]);
    }

    return 0;
}
