#include <stdio.h>

int main(void) {
    double a[6];
    double sum = 0, avg;
    int i;

    for(i=0; i<6; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }

    avg = sum / 6;

    printf("%.1f", avg);

    return 0;
}
