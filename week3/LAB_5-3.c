#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    printf("%s", (num%2==0)?"Even":"Odd");
    return 0;

}