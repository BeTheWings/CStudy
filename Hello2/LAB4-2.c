#include<stdio.h>
int main(void) {

	/*1���� �� 3.156*10^7�ʿ� �ش��Ѵ�. 3.156*10^7�� const���� yearTosec�� �����ϰ� ���̸� �޼��� �Է� �޾� �ʴ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�*/
	
	const double yearToSec= 3.156e7;
	int age;
	double ageToSec;

	printf("���̸� �Է����ּ���:");
	scanf("%d", &age);

	ageToSec = age * yearToSec;

	printf("%d�� �ش��ϴ� ������ �ʴ� %e�� �Դϴ�.\n",age, ageToSec);


	return 0;
}