//register 지정자 사용하기

#include <stdio.h>

int main()
{
    register int i; //register 지정자
    
    for (i=0; i<1000000; i++) { //빠른 반복을 위해 i를 register에 저장하도록 요청

    }
    printf("i=%d\n",i);
    return 0;
}

//결과: i=1000000