#include <stdio.h>

int main(void) {
    int a[3][3];
    int i, j;
    int sum, total = 0;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++) {
        sum = 0;

        for(j=0; j<3; j++) {
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }

        printf("%d\n", sum);
    }

    for(j=0; j<3; j++) {
        sum = 0;

        for(i=0; i<3; i++) {
            sum += a[i][j];
        }

        printf("%d ", sum);
        total += sum;
    }

    printf("%d\n", total);

    return 0;
}
