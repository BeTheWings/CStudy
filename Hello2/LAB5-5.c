#include<stdio.h>
int IsLeap(int year);
int main(void) 
{
	int year;
	printf("년도를 입력해주세요");
	scanf("%d", &year);
   IsLeap(year);
return 0;
}
int IsLeap(int year) {
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) {
		printf("윤년입니다.");
	}	
}

