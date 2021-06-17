/* Lab8_�ǽ�4
�� ������ �����ϴ� QuickSort �Լ��� �����ϰ�, �� �Լ��� �̿��ؼ� �Է¹��� ������ �迭�� �����ؼ�
����ϴ� ���α׷��� �ۼ��Ͻÿ�.
QuickSort �Լ��� ������ �迭�� ���� ���(�������� or ��������)�� �Լ������ڷ� ���� ����
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
        printf("���� ����� �Է��ϼ���(1.�������� 2.��������) : ");
        scanf("%d", &isAscending);
        if (isAscending == 1 || isAscending == 2)
            break;
    }

    QuickSort(arr, 10, isAscending);

    if (isAscending == 1)
        printf("�������� ");
    else if (isAscending == 2)
        printf("�������� ");

    printf("���� �� : ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void QuickSort(int* arr, int n, int isAscending)
{
    int left, right;
    //left �ʱⰪ�� ��� ó������ ����
    //right�� arr�� ���� ���������� ����
    int key;
    //ù pivot���� ��� 0���� �����Ͽ� ����
    int temp;
    //right�� ���� left�� ������ ũ�ų� ���� ��� ��ġ�� �ٲٱ� ���� ���
     //n�� 1���� �۰ų� ���� ��� �ݺ��� ���߰� �ȴ�.
    if (n <= 1)
        return;

    key = arr[0]; //ù ���Ҹ� �ǹ�
    left = 0; 
    right = n;

    while (1)
    {
        if (isAscending == 1)
        {
            while (arr[++left] < key); //pivot�� ������ left�� ���� �۴ٸ� left�� ���� ��� �����ش�.
            while (arr[--right] > key); //pviot�� ������ right���� ũ�ٸ� right���� ���鼭 ���Ѵ�.
        }
        else
        {
            while (arr[++left] > key);  //left���� key�� ���� Ŭ������ ���Ѵ�.
            while (arr[--right] < key); //right���� key�� ���� ���������� ���Ѵ�.
        }
        if (left >= right)   //���� ���� ����ϰų� left�� ���� ū ��� ��� ���� ���ߴ� �����ϰ� �ݺ����� �����.
            break;

        temp = arr[left];     //swap
        arr[left] = arr[right]; //swap
        arr[right] = temp; //swap
    }
    temp = arr[right];    //���� right�� ��ȣ�� left���� ũ�ų� ���� ��� 0��°�� ���� right�� ���� ��ġ�� �ٲ��ش�.
    arr[right] = arr[0];
    arr[0] = temp;

    QuickSort(arr, right, isAscending); //pivot�� �������� ���� ����
    QuickSort(arr + right + 1, n - right - 1, isAscending); //pivot�� �������� ���� ����
}