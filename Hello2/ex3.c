#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int age;
	double score;

	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &age);
	printf("�Է��Ͻ� ���̴� %d�Դϴ�.\n", age);
	printf("������ �Է��ϼ��� :");
	/*scanf�� lf�� printf�� %f�� �Է��ϸ� �˾Ƽ� ã�ư���*/
	scanf_s("%lf", &score);
	printf("�Է��Ͻ� ������ %f �Դϴ�. \n", score);
	
	return 0;
}