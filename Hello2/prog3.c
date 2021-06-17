#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {


	double tall;
	float kg;

	printf("키를 입력해주세요\n");
	scanf("%lf", &tall);
	printf("몸무게를 입력해주세요\n");
	scanf("%f", &kg);

	printf("======================\n");
	printf("    건강 검진 결과    \n");
	printf("======================\n\n");
	printf("이름: 강이화\n");
	printf("나이: 20세\n");
	printf("키 : %.0fcm\n",tall);
	printf("체중 : %.2fkg\n",kg);
	printf("혈액형: B형\n\n");
	printf("======================");
	return 0;


	/*한곳에 복사해서 제출하기*/
}