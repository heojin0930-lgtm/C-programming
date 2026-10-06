#include <stdio.h>

int main()
{
    //각 줄에서 별을 1개부터 i개까지 출력
    for(int i=5; i>=1; i--) //i가 1일때 j가 5번 반복 형식 (i>=1 부분 이해)
    {
        //5줄을 만들면서 별 개수가 점점 줄어드게 하는 거
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}