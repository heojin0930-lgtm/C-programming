#include <stdio.h>

int main()
{
    char ch; //문자 1개를 저장할 변수 선언
    
    char str[10];
    int i;
    float f;

    printf("문자를 입력하세요: ");
    scanf("%c", &ch);

    printf("문자열를 입력하세요: ");
    scanf("%s", str);

    printf("입력받은 문자: %c\n", ch); //입력받은 문자 ch 출력
    printf("입력받은 문자열: %s\n", str); //입력받은 문자열 str 출력

    printf("정수를 입력하세요: ");
    scanf("%d", &i); //&i는 변수 i의 메모리 주소를 의미
    
    printf("실수를 입력하세요: ");
    scanf("%f", &f); //&f는 변수 f의 메모리 주소를 의미

    printf("입력받은 정수: %d\n", i); //입력받은 정수 i 출력
    printf("입력받은 실수: %f\n", f); //입력받은 실수 f 출력

    return 0;
}