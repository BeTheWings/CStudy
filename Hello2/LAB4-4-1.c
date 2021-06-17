#include<stdio.h>

int main(void) {
	double hour;
	double hour1;
	double min;
	double min1;
	double sec;
	double sec1;
	double result;

	printf("시간을 입력해주세요.\n");
	scanf("%lf", &hour);

	printf("분을 입력해주세요.\n");
	scanf("%lf", &min);

	printf("초를 입력해주세요.\n");
	scanf("%lf", &sec);

	hour1 = hour * 3600;
	min1 = min * 60;
	result = hour1 + min1 + sec;

	printf("입력받은 시간 %.0f 시 %.0f 분 %.0f 초의 총 초는 %.0f 입니다.",hour,min,sec,result);


	return 0;
}