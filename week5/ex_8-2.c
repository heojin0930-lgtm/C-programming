//매개변수에서의 변수 접근 범위, 지역변수의 지속 기간 변경하기

#include <stdio.h>

void modifyMainVar(int mainVar) {

    int blockVar = 10; //중첩 블록의 지역변수
    printf("블록 안에서 blockVar = %d\n",blockVar);

    mainVar = 20; //메인함수의 지역변숫값 변경
    printf("블록 안에서 변경된 mainVar = %d\n",mainVar);
}
int main() {

    int mainVar = 5; //메인바 함수 생성 및 5저장(메인함수의 지역변수)
    printf("main 함수의 초기 mainVar = %d\n",mainVar);

    modifyMainVar(mainVar); //같은 변수를 가져가는 것이 아닌 값을 복사해서 전달
    printf("블록 바깥에서 mainVar = %d\n",mainVar);

    return 0;
}