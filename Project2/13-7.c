#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main(void) {
     
	int (*fp[4])(int, int);
		fp[0] = add;
		fp[1] = sub;
		fp[2] = mul;
		fp[3] = div;
		int select=0;
		int a=0;
		int b=0;
		printf("함수 번호와 계산할 값을 입력하세요.");
		scanf("%d %d %d", &select, &a, &b);
		printf("두 수의 합은 %d입니다.", fp[select - 1](a, b));

	return 0;
}
int mul(int a, int b) {
	return a * b;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}

int div(int a, int b) {

	return a / b;
}

