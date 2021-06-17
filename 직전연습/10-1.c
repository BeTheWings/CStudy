#include<stdio.h>

void sum(int *a, int *b);
int main(void) {
	int a[3][10]={ {1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30} };
	int b[3];
    
	sum(&a, &b);
	return 0;
}
/*2차원 배열을 포인터로 넘기면 int(*a)[10]형태로 넘겨도 된다.*/
 void sum(int(*a), int* b) {

	 int sum = 0;
	 for (int i = 0;i < 3;i++) {
	 
		 for (int j = 0;j < 10;j++) {
			 sum = a[i][j] + sum;
			 b[i] = sum;
		 }
		 printf("%d\n",b[i]);
		 sum = 0;
	 }
}