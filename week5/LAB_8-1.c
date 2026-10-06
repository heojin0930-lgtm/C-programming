//변수의 지속 시간 추정하기

#include <stdio.h>
#include <time.h>
#include <mac.h>

int globalVar;

void demonstrateVariableLifetime() {
    static int staticVar;
    int localVar = 0;

    printf("정적 지역변수와 일반 지역변수가 생성된 시간 (ms): %ld\n",clock());
    Sleep(2000);



    staticVar++;
    localVar++;
    printf("장작 지역변수와 일반 지역변수가 소멸되기 전 시간 (ms): %ld\n",clock());
    Sleep(3000);
}

int main() {
    Sleep(2000);
    printf("전역변수가 생성된 시간 (ms): ")
}




