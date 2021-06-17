/* Lab8_실습4
퀵 정렬을 수행하는 QuickSort 함수를 정의하고, 이 함수를 이용해서 입력받은 정수형 배열을 정렬해서
출력하는 프로그램을 작성하시오.
QuickSort 함수는 정수형 배열과 정렬 방법(오름차순 or 내림차순)을 함수의인자로 전달 받음
 */

#include <stdio.h>

void QuickSort(int* arr, int n, int isAscending);

int main(void)
{
    int arr[10] = {9,5,10,12,13,14,15,16,1,2};
    int i;
    int isAscending;

    while (1)
    {
        printf("정렬 방법을 입력하세요(1.오름차순 2.내림차순) : ");
        scanf("%d", &isAscending);
        if (isAscending == 1 || isAscending == 2)
            break;
    }

    QuickSort(arr, 10, isAscending);

    if (isAscending == 1)
        printf("오름차순 ");
    else if (isAscending == 2)
        printf("내름차순 ");

    printf("정렬 후 : ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void QuickSort(int* arr, int n, int isAscending)
{
    int left, right;
    //left 초기값의 경우 처음으로 시작
    //right는 arr의 가장 끝에서부터 시작
    int key;
    //첫 pivot값의 경우 0으로 설정하여 진행
    int temp;
    //right의 값이 left의 값보다 크거나 작을 경우 위치를 바꾸기 위해 사용
     //n이 1보다 작거나 같은 경우 반복을 멈추게 된다.
    if (n <= 1)
        return;

    key = arr[0]; //첫 원소를 피벗
    left = 0; 
    right = n;

    while (1)
    {
        if (isAscending == 1)
        {
            while (arr[++left] < key); //pivot의 값보다 left의 값이 작다면 left의 값을 계속 더해준다.
            while (arr[--right] > key); //pviot의 값보다 right값이 크다면 right값을 빼면서 비교한다.
        }
        else
        {
            while (arr[++left] > key);  //left값이 key값 보다 클때까지 비교한다.
            while (arr[--right] < key); //right값이 key값 보다 작을때까지 비교한다.
        }
        if (left >= right)   //둘의 값이 비슷하거나 left의 값이 큰 경우 모든 값을 비교했다 생각하고 반복문을 멈춘다.
            break;

        temp = arr[left];     //swap
        arr[left] = arr[right]; //swap
        arr[right] = temp; //swap
    }
    temp = arr[right];    //만약 right의 번호가 left보다 크거나 작은 경우 0번째의 값과 right의 값의 위치를 바꿔준다.
    arr[right] = arr[0];
    arr[0] = temp;

    QuickSort(arr, right, isAscending); //pivot을 기준으로 좌측 정렬
    QuickSort(arr + right + 1, n - right - 1, isAscending); //pivot을 기준으로 우측 정렬
}