#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {


	double tall;
	float kg;

	printf("Ű�� �Է����ּ���\n");
	scanf("%lf", &tall);
	printf("�����Ը� �Է����ּ���\n");
	scanf("%f", &kg);

	printf("======================\n");
	printf("    �ǰ� ���� ���    \n");
	printf("======================\n\n");
	printf("�̸�: ����ȭ\n");
	printf("����: 20��\n");
	printf("Ű : %.0fcm\n",tall);
	printf("ü�� : %.2fkg\n",kg);
	printf("������: B��\n\n");
	printf("======================");
	return 0;


	/*�Ѱ��� �����ؼ� �����ϱ�*/
}