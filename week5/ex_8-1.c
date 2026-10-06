//함수의 중첩 블록 내 지역변수의 지속 기간 변경하기

#include <stdio.h>

int main()
{
    int mainVar = 5; //main() 함수의 지역변수
    printf("main 함수의 초기 mainVar = %d\n",mainVar);

    {
        int blockVar = 10; //중첩 블록의 지역변수
        printf("블록 안에서 blockVar = %d\n",blockVar);

        mainVar = 20; //메인 함수의 지역변숫값 변경
        printf("블록 안에서 변경된 mainVar = %d\n",blockVar);
    } //중첩블록의 바깥에서는 지역변수의 블록 함수를 사용할 수 없음

    printf("블록 밖에서 mainVar = %d\n",mainVar);

    return 0;
}