#include<stdio.h>

int main(void) {

	double money = 1000000;
	int year;
	double TotalMoney;
	printf("��ġ �Ⱓ�� �� ������ �Է����ּ���.\n");
	scanf("%d", &year);

	TotalMoney = money*(1 + 0.045 * year);
	printf("�ѱݾ�: %f", TotalMoney);
	return 0;

}