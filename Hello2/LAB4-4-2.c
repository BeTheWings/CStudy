#include<stdio.h>

int main(void) {

	int sec;
	int sec1;
	int min;
	int hour;
	int result;


	printf("�ʸ� �Է����ּ���\n");
	scanf("%d", &sec);


	hour = sec / 3600;
	min = (sec - hour* 3600) / 60;
	sec1 = sec - min * 60 - hour * 3600;
	
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", sec, hour, min, sec1);
	return 0;
}