#include <stdio.h>

void main()
{
    int a,b;
    int temp;
    scanf("%d", &a);
    scanf("%d", &b);

    temp = b;
    while (temp !=0) //>=0이면 왜 계속 0일까
    {
        printf("%d\n", a*(temp%10));
        temp/=10;
    }
    printf("%d", a*b);
    
}