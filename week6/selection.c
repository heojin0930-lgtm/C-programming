#include <stdio.h>


//선택 정렬 함수
//arr : 정렬할 배열
//size : 베열의 크기
void SelectionSort(int arr[], int size)
{
    int min, temp;

    //i는 현재 정확한 위치를 나타냄
    //배열의 마지막 원소는 자동으로 정렬되므로 size - 1까지만 반복
    for (int i = 0; i<size - 1; i++)
    {

        // 현재 위치의 원소를 가장 작은 값이라고 일단 가정
        min = i;

        // i의 다음 위치부터 배열의 끝까지 비교
        // 현재 위치보다 뒤에 있는 원소 중 더 작은 값을 찾음
        for (int j = i + 1; j<size; j++)
        {
            // 현재 확인하고 있는 arr[j]가
            // 지금까지 찾은 가장 작은 값 arr[min]보다 작다면
            if(arr[j] < arr[min])
            {
                // 가장 작은 값의 위치를 j로 변경
                min = j;
            }
        }
        // 가장 작은 값이 현재 위치에 있지 않은 경우에만 교환
        if (i!=min)
        {
            // 현재 위치의 값을 임시 변수 temp에 저장
            // 값을 교환할 때 기존 값을 잃어버리지 않기 위해 사용
            temp = arr[i];

            // 가장 작은 값을 현재 위치로 이동
            arr[i] = arr[min];

            // 기존의 현재 위치 값을 최소값이 있던 위치로 이동
            arr[min] = temp;
        }

    }
}