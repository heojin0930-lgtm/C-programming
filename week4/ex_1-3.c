#include <stdio.h>

void Num(int n) {
    if (n < 1) {
        return;
    }
    else {
        printf("%d\n", n);
        Num(n - 1);
    }
}

int main() {
    int n = 5;
    Num(n);

    return 0;
}