#include<stdio.h>
int SumOfArray(const int *arr,int size);
int b;
int main(void) {
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
     
    b=sumOfArray(A, 10);
	printf("배열 A의 총합은 %d입니다.", b);
	return 0;
}
int sumOfArray(const int *arr,int size) {
	for (int i = 0;i < size;i++) {
		b = arr[i] + b;
	}
	
	return b;
}