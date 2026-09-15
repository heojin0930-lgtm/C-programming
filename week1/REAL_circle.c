#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    double radius, area, circumference;

    printf("원의 반지름을 입력하세요: ");
    scanf("%lf", &radius);

    area=3.14 * radius * radius;
    circumference=2 * 3.14 * radius;

    printf("원의 면적: %.2lf\n", area);
    printf("원의 둘레: %.2lf\n", circumference);

    return 0;
}