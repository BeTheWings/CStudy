#include<stdio.h>
int main(void) {

	/*1년은 약 3.156*10^7초에 해당한다. 3.156*10^7를 const변수 yearTosec로 선언하고 나이를 햇수로 입력 받아 초단위로 출력하는 프로그램을 작성하시오*/
	
	const double yearToSec= 3.156e7;
	int age;
	double ageToSec;

	printf("나이를 입력해주세요:");
	scanf("%d", &age);

	ageToSec = age * yearToSec;

	printf("%d에 해당하는 나이의 초는 %e초 입니다.\n",age, ageToSec);


	return 0;
}