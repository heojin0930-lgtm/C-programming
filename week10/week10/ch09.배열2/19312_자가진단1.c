#include <stdio.h>

int main(void) {
    int a[26] = {0};
    char ch;
    int i;

    while(1) {
        scanf(" %c", &ch);

        if(ch < 'A' || ch > 'Z') {
            break;
        }

        a[ch - 'A']++;
    }

    for(i=0; i<26; i++) {
        if(a[i] > 0) {
            printf("%c : %d\n", 'A' + i, a[i]);
        }
    }

    return 0;
}
