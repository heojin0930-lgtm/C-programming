#include <stdio.h>

int main(void) {
    int a[100];
    int i;
    int count = 0, sum = 0;
    double avg = 0;

    for(i=0; i<100; i++) {
        scanf("%d", &a[i]);

        if(a[i] == 0) {
            break;
        }

        if(a[i] % 5 == 0) {
            count++;
            sum += a[i];
        }
    }

    if(count > 0) {
        avg = (double)sum / count;
    }

    printf("%d %d %.1f", count, sum, avg);

    return 0;
}
