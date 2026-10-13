#include <stdio.h>

int main()
{
    int num = 5-;
    int*pnum;

    pnum=&num;

    printf("*(pnum) = %d\n", *(num));
    printf("*(pnum++) = %d\n", *(pnum++));
    printf("(++pnum) = %d\n", *(++pnum));

    return 0;
}