//전역변수의 범위 변경하기

#include <stdio.h>

int globalVar = 10; //!전역변수! globalVar 선언 및 초기화

void printValue() { 
    printf("globalVar = %d\n",globalVar); //전역변수와 현재 값을 출력하는 함수
}

int main()
{
    printValue();
    globalVar = 20;
    printValue();

    return 0;
}