#include <stdio.h>

int main(void) {
    int a[10];
    int i;
    int even = 0, odd = 0;
    double avg;

    for(i=0; i<10; i++) {
        scanf("%d", &a[i]);

        if(i % 2 == 0) {
            odd += a[i];
        }
        else {
            even += a[i];
        }
    }

    avg = odd / 5.0;

    printf("%d %.1f", even, avg);

    return 0;
}
