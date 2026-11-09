#include <stdio.h>

int main(void) {
    int a[4][2];
    int i, j;
    int sum, total = 0;

    for(i=0; i<4; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &a[i][j]);
            total += a[i][j];
        }
    }
    for(i=0; i<4; i++) {
        sum = 0;

        for(j=0; j<2; j++) {
            sum += a[i][j];
        }

        printf("%d ", sum / 2);
    }
    printf("\n");

    for(j=0; j<2; j++) {
        sum = 0;

        for(i=0; i<4; i++) {
            sum += a[i][j];
        }

        printf("%d ", sum / 4);
    }
    printf("\n");

    printf("%d\n", total / 8);

    return 0;
}
