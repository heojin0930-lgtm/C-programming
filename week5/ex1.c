//static 지역변수의 특징

#include <stdio.h>

void func()
{
    static int count = 0;

    count++;
    printf("%d\n",count); //함수 끝, !count는 안 사라짐
}

int main()
{
    func(); //1
    func(); //2
    func(); //3

    return 0;
}