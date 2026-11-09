#include <stdio.h>

int main(void) {
    int a[11] = {0};
    int n, i;

    while(1) {
        scanf("%d", &n);

        if(n == 0) {
            break;
        }

        a[n / 10]++;
    }

    for(i=10; i>=0; i--) {
        if(a[i] > 0) {
            printf("%d : %d person\n", i * 10, a[i]);
        }
    }

    return 0;
}
