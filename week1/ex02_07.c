#pragma warning(disable: 4996) //컴파일러 경고 비활성화-scanf()함수 보안 경고 대비
#include <stdio.h> //표준 라이브러리 헤더 파일 포함

int main()
{
    int a,b;
    char op;

    printf("두 정수 덧셈 (ex 10+20): ");
    scanf("%d %c %d" ,&a, &op, &b);

    printf("%d %c %d = %d\n", a, op, b, a+b);

    return 0;
}


