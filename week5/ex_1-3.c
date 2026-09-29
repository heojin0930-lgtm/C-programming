#include <stdio.h>

int main()
{
    int score;
    int count[11] = {0};

    while (1)
    {
        scanf("%d", &score);

        if (score == 0) /*순서가 중요하다 (점수가 0인 것을 먼저 확인)*/
            break;
        
        count[score/10]++;
    }

    for (int i =10; i>=1; i--)
    {
        if (count[i]>0)
            printf("%d0 : %d\n", i, count[i]);
    }

    return 0;
}