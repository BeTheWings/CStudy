#include<stdio.h>
int main(void) {
	int a = 1, b = 2, c = 3;
	int result;
	/*%는 나머지를 구하는것*/
	result = a + b * c % 2;
	printf("result = %d\n", result);

	/*c가 0보다 크기때문에 true*/

	result = a > b || c > 0;
	printf("result = %d\n", result);

	/*c가 0보다 크기때문에 true*/
	result = a > b || c > 0 && b > c;
	printf("result = %d\n", result);

	/*&& and 인데 b가 c보다 작기 때문에 false*/
	result = a = b = c; /*대입문이라서 3이 나온다.*/
	printf("result = %d\n", result);

	return 0;
}