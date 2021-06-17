#include<stdio.h>

int main(void) {

	int sec;
	int sec1;
	int min;
	int hour;
	int result;


	printf("초를 입력해주세요\n");
	scanf("%d", &sec);


	hour = sec / 3600;
	min = (sec - hour* 3600) / 60;
	sec1 = sec - min * 60 - hour * 3600;
	
	printf("%d초는 %d시간 %d분 %d초 입니다.\n", sec, hour, min, sec1);
	return 0;
}