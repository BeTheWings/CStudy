#include<stdio.h>

int fibonacci(int a);
int main(void) {
	int a = 0;
	int result = 0;
	printf("정수를 입력하세요:(입력 값은 10~30):");
	scanf("%d", &a);

	for (int i = 1;i <= a;i++) {
		fibonacci(i);
	}
	printf("결과는 %d입니다.", fibonacci(a));

	return 0;
}

int fibonacci(int a) {

	if (a <= 0) {
		return 0;
	}
	else if (a == 1) {
		return 1;
	}
	return fibonacci(a - 2) + fibonacci(a - 1);
}