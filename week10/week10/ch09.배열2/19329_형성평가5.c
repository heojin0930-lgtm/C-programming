#include <stdio.h>

int main(void) {
    int a[4][3];
    int i, j;
    int sum, total = 0;

    for(i=0; i<4; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<4; i++) {
        sum = 0;

        for(j=0; j<3; j++) {
            sum += a[i][j];
        }

        printf("%d\n", sum);
        total += sum;
    }

    printf("%d", total);

    return 0;
}
