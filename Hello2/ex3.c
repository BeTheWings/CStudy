#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int age;
	double score;

	printf("나이를 입력하세요 :");
	scanf_s("%d", &age);
	printf("입력하신 나이는 %d입니다.\n", age);
	printf("점수를 입력하세요 :");
	/*scanf는 lf를 printf는 %f를 입력하면 알아서 찾아간다*/
	scanf_s("%lf", &score);
	printf("입력하신 점수는 %f 입니다. \n", score);
	
	return 0;
}