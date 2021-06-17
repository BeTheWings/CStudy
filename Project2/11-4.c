#include<stdio.h>
#define ALGORITHM 2
#define COUNT 5
#define LENGTH 16


void PrintStrings(const char(*arr)[LENGTH], int size);
void SelectionSort(char(*arr)[LENGTH], int size);
void QuickSort(char(*arr)[LENGTH], int size);

int main(void) {
	char arr[COUNT][LENGTH] = { "watermelon","strawberry","kiwi","mango","banna", };

	printf("정렬 전");
	PrintStrings(arr, COUNT);

#if ALGORITHM == 1
	QuickSort(arr,COUNT);
#elif ALGORITHM ==2
	SelectionSort(arr,COUNT);
#endif
	printf("정렬 후");
	PrintStrings(arr, COUNT);

	return 0;
}
void PrintStrings(const char(*arr)[LENGTH], int size)
{
    int i;

    printf("문자열 배열 : ");
    for (i = 0; i < size; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

void SelectionSort(char(*arr)[LENGTH], int size)
{
    int i, j, indexMin;
    char temp[LENGTH] = "";

    for (i = 0; i < size - 1; i++)
    {
        //0부터 size -1까지 선택을 하면서 반복 비교를 하여 위치를 바꾼다
        indexMin = i;
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(arr[j], arr[indexMin]) < 0)
            {
                indexMin = j;
            }
        }
        strcpy(temp, arr[indexMin]);
        strcpy(arr[indexMin], arr[i]);
        strcpy(arr[i], temp);
    }
}

void QuickSort(char(*arr)[LENGTH], int size)
{
    int left, right;
    char key[LENGTH];
    char temp[LENGTH];

    //pivot을 정해서 반으로 arr를 갈라서 진행한다.
    if (size <= 1)
        return;

    strcpy(key, arr[0]);
    left = 0;
    right = size;
    while (1)
    {
        while (strcmp(arr[++left], key) < 0);
        while (strcmp(arr[--right], key) > 0);
        if (left >= right)
            break;
        //위치변환
        strcpy(temp, arr[left]);
        strcpy(arr[left], arr[right]);
        strcpy(arr[right], temp);
    }
    //위치변환
    strcpy(temp, arr[right]);
    strcpy(arr[right], arr[0]);
    strcpy(arr[0], temp);
    //재귀
    QuickSort(arr, right);
    QuickSort(arr + right + 1, size - right - 1);
}

