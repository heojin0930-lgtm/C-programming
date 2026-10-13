#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    a=10;
    (*p)++;
    printf("1. (p*)++ = %d\n", a);

    a=10;
    (*p) + 1;
    printf("2. (*p)+1 = %d\n", a);
    
    a=10;
    *p += 1;
    printf("3. *p+=1 = %d\n", a);

    a=10;
    (*p) += 1;
    printf("4. (*p)+=1 = %d\n", a);

    a=10;
    *p = *p + 1;
    printf("5. *p=*p+1 = %d\n", a);

    a=10;
    ++*p;
    printf("6. ++*p = %d\n", a);

    a=10;
    ++(*p);
    printf("7. ++(*p) = %d\n", a);




}