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
			printf("�Ͽ����Դϴ�.\n");
			break;
		case 1:
			printf("�������Դϴ�.\n");
			break;
		case 2:
			printf("ȭ�����Դϴ�.\n");
			break;
		case 3:
			printf("�������Դϴ�.\n");
			break;
		case 4:
			printf("������Դϴ�.\n");
			break;
		case 5:
			printf("�ݿ����Դϴ�.\n");
			break;
		case 6:
			printf("������Դϴ�.\n");
			break;
		}
	}
	return 0;
}