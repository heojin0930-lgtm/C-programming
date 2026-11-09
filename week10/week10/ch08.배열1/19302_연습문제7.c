#include <stdio.h>

int main(void) {
    int a[10];
    int i, sum = 0;
    double avg;

    for(i=0; i<10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / 10.0;

    printf("%d\n", sum);
    printf("%.1f", avg);

    return 0;
}
