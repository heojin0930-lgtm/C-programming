#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int a;
    char op;
    float b;

    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    printf("문자를 입력하세요: ");
    scanf(" %c", &op); // 공백을 넣어 이전 입력 버퍼를 비움

    printf("실수를 입력하세요: ");
    scanf("%f", &b);

    printf("입력받은 정수: %d\n", a);
    printf("입력받은 문자: %c\n", op);
    printf("입력받은 실수: %f\n", b);

    return 0;
}