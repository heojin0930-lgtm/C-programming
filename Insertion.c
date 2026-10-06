#include <stdio.h>

void InsertionSort(int arr[], int size)
{
    int key, j;    // key: 현재 정렬할 값을 저장
                   // j: 앞쪽 원소를 비교하고 이동하기 위한 변수

    // 두 번째 원소부터 마지막 원소까지 반복
    // 첫 번째 원소(arr[0])는 이미 정렬되어 있다고 생각함
    for (int i = 1; i < size; i++)
    {
        key = arr[i];    // 현재 정렬할 값을 key에 저장

        // 현재 값의 바로 앞 원소부터 비교
        // 앞의 값이 key보다 크면 오른쪽으로 이동
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];    // 앞의 큰 값을 오른쪽으로 한 칸 이동
        }

        // 값들을 모두 이동시킨 후
        // 비어 있는 위치에 key를 삽입
        arr[j + 1] = key;
    }
}