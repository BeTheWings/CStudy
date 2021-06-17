#include<stdio.h>
int main(void) {

	/*섭씨 온도를 입력 받은 후에 이를 화씨 온도로 변환하여 화면에 출력하는 프로그램을 작성하시오. 입력과 출력은 알아보기 쉽게 하시오*/
	double c;
	double f;
	printf("섭씨 온도를 입력해주세요.\n");
	scanf("%lf", &c);

	f = 9.0 / 5.0 * c + 32.0;

	printf("입력하신 섭씨 온도는 %f 이며 화씨온도는 %f 입니다.",c,f);
	
	return 0;
}