#include <stdio.h>

int main(void) {
    int a[5][4];
    int i, j, sum;
    double avg;

    for(i=0; i<5; i++) {
        for(j=0; j<4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<5; i++) {
        sum = 0;

        for(j=0; j<4; j++) {
            sum += a[i][j];
        }

        avg = sum / 4.0;

        printf("%d %.1f\n", sum, avg);
    }

    return 0;
}
