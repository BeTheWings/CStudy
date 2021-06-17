#include<stdio.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS

 struct date {
	int year;
	int mon;
	int day;
};
 struct tm* localtime(const time_t* timep);
 typedef struct date data;

int main(void) {
	time_t rawTime;
	struct tm* lt;
	data Data;
	rawTime = time(NULL);
	lt = localtime(&rawTime);

	Data.year = lt->tm_year+1900;
	Data.mon =  lt->tm_mon+1;
	Data.day =  lt->tm_mday;

	printf("%d³â%d¿ù%dÀÏ", Data.year, Data.mon, Data.day);

	
return 0;
}

