#include<stdio.h>

typedef enum week {
	sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Count
}Week;
int main(void) {
	for (Week i = sunday; i < Count;i++) {
		switch (i)
		{
		case 0:
			printf("일요일입니다.\n");
			break;
		case 1:
			printf("월요일입니다.\n");
			break;
		case 2:
			printf("화요일입니다.\n");
			break;
		case 3:
			printf("수요일입니다.\n");
			break;
		case 4:
			printf("목요일입니다.\n");
			break;
		case 5:
			printf("금요일입니다.\n");
			break;
		case 6:
			printf("토요일입니다.\n");
			break;
		}
	}
	return 0;
}