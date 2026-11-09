#include <stdio.h>

int main(void) {
    double a[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%.1f", a[x-1] + a[y-1]);

    return 0;
}
