#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max 100

void RnumberGen(int *arr,int size,int range);
void GetMinMax(int *arr, int size);

int main(void) {
    int a[Max];
    
    RnumberGen(a,sizeof(a)/sizeof(int),100);
   
    return 0;
}

void RnumberGen(int *a, int size, int range) {
    int i;
    srand(time(NULL));

    for (i = 0;i < size; i++) {
        a[i] = rand() % range + 1;    
    }

    GetMinMax(a,size);
}
void GetMinMax(int *a,int size) {

   int min = a[0];
   int max = a[0];
    for (int i = 0;i < size;i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    for (int i = 0;i < size;i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("최소값은 %d입니다.", min);
    printf("최대값은 %d입니다.", max);

}