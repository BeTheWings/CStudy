#include<stdio.h>

int main(void) {
	double hour;
	double hour1;
	double min;
	double min1;
	double sec;
	double sec1;
	double result;

	printf("�ð��� �Է����ּ���.\n");
	scanf("%lf", &hour);

	printf("���� �Է����ּ���.\n");
	scanf("%lf", &min);

	printf("�ʸ� �Է����ּ���.\n");
	scanf("%lf", &sec);

	hour1 = hour * 3600;
	min1 = min * 60;
	result = hour1 + min1 + sec;

	printf("�Է¹��� �ð� %.0f �� %.0f �� %.0f ���� �� �ʴ� %.0f �Դϴ�.",hour,min,sec,result);


	return 0;
}