#include <stdio.h>
#include <stdlib.h>

void GetSum(int (*x)[10], int *y, int n);

int main(void)
{
    int arr1[5][10];
    int arr2[5];
    int i, j;

    for(i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            arr1[i][j] = rand( ) % 100;  // 0~99������ ������ ������ arr1�� ä���.
            
        }
        arr2[i] = 0;
    }

    GetSum(arr1, arr2, 5);

    printf("2���� �迭 : \n");
    for(i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 10 ; j++)
            printf("%3d ", arr1[i][j]);
        printf(" ==> %5d\n", arr2[i]);
    }

    return 0;
}

void GetSum(int (*x)[10], int *y, int n)
{
    int i, j;

    for(i = 0 ; i < n ; i++ )
    {
        y[i] = 0;
        for(j = 0 ; j < 10 ; j++)
            y[i] += x[i][j];
    }
}