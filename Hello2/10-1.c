#include <stdio.h>

/*함수 인자 getsum 진행*/
void getSum(int * p,int *sum);

int main(void) {
	int a[3][10] = { {1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30} };
	
	int b[3];
	getSum(a,b);


	return 0;
}
void getSum(int(*p)[10],int * b) {
	/**/
	int sum = 0;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 10;j++) {
			sum = p[i][j] + sum;
			b[i] = sum;
		}
		printf("%d\n", b[i]);
		sum = 0;
		
	}
}