#include <stdio.h>

int main(void) {
    int a[3][5] = {
        {5, 8, 10, 6, 0},
        {11, 20, 1, 13, 0},
        {7, 9, 14, 22, 0}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d   ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
